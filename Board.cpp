#include <iostream>
#include <vector>
#include <string>
#include "BugClass.h"
#include "Board.h"
#include <fstream> // used for access to the file input and output classes, ifstream and ofstream
#include <sstream>

using namespace std;
    //1.Inisialise the bug class
    Board::Board() {}
        vector<BugClass *> Board::ReadFromFile() {
            vector<BugClass *> tempVec;

            ifstream fin("bugs.txt"); // creates an input file stream to the file "input.txt"
            if (!fin.is_open()) // ensures the file input stream is opened correctly
            {
                char bugType; // creates a variable to store each word we read in from the file.
                while (!fin.eof()) // ensures we haven't reached the end of file (eof) ! = not
                {
                    string tempLine; //temperary line reader
                    char type;
                    if (!(type == 'H')) { //Based on what type in the bug txt file
                        getline(fin, tempLine, ';');//String templine is just a placeholder
                        stringstream bugged1(
                                tempLine);//Getline is a function that gets a single line from the file and stores it in tempLine -_-
                        tempLine.push_back(bugType);

                    }
                    if (!(type == 'C')) { //Based on what type in the bug txt file
                        getline(fin, tempLine, ';');//String templine is just a placeholder
                        stringstream bugged2(
                                tempLine);//Getline is a function that gets a single line from the file and stores it in tempLine #_#
                        tempLine.push_back(bugType);
                    } else {

                        std::cout << "Unable to open file" << std::endl;
                    }
                }
            }
            fin.close();
            return tempVec;
        }
        //2.Displaying the Bugs
        void Board::displayAllBugs(const std::vector<BugClass *> &bugs) {
            std::cout << "ID\tType\tLocation\tSize\tDirection\tHop Length\tStatus" << std::endl;
            for (const BugClass *bug: bugs) {
                std::cout << bug->getId() << "\t"
                          << bug->getLocation().first << "," << bug->getLocation().second << ")\t"
                          << bug->getSize() << "\t" << bug->getDirection() << "\t"
                          << "\t" << bug->isAlive1() << std::endl;
            }
            //3.Finding the Bugs
            void findBugById(int bugId);
            bool found = false;
            const int bugId = 0;
            for (const BugClass *bug: bugs) {
                if (bug->getId() == bugId) {
                    std::cout << bug->getId() << "\t"
                              << bug->getLocation().first << "," << bug->getLocation().second << ")\t"
                              << bug->getSize() << "\t" << bug->getDirection() << "\t"
                              << "\t" << bug->isAlive1() << std::endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                std::cout << "Bug " << bugId << " not found." << std::endl;
            }

        }

        //4.Taps the Board
        void tapBugBoard(std::vector<BugClass *> &bugs) {
            for (BugClass *bug: bugs) {
                // Call the move() method for each bug
                bug->move();
            }

        //5.Show the life Story of the Bugs
        void displayHistoryOfBugs(const std::vector<BugClass *> &bugs){
            std::cout << "Life History of all bugs:" << std::endl;
            for (const BugClass *bug: bugs) {
                std::cout << bug->getId() << " " << " Type: " << bug->getType();
                const std::vector<std::pair<int, int>> &path = bug->getLocation();
                if (!path.empty()) {
                    for (const auto &position: path) {
                        std::cout << "Positions:" << position.first << "," << position.second;
                    }
                }
                std::cout << "Bugs Alive: " << bug->getisAlive1();
                if (bug->getisAlive1() == "Slain by" || bug->getisAlive1() == "Died") {
                    std::cout << " " << bug->getisAlive1(false);
                }
                cout << " Status: " << (bug->isAlive() ? "Alive" : "Dead") << endl;
        }
            //6.Write the History Of The Life Of Bugs In Another File
            void writeTheLifeOfTheBugs(const std::vector<BugClass*>& bugs) {
            std::ofstream outFile(bugs_life_history_date_time.out);
            if (!outFile.is_open()) {
                std::cout << "Error: Unable to open file " << filename << std::endl;
                return;
            }
                std::cout << "Life History of all bugs:" << std::endl;
                for (const BugClass *bug: bugs) {
                    std::cout << bug->getId() << " " << " Type: " << bug->getType();
                    const std::vector<std::pair<int, int>> &path = bug->getLocation();
                    if (!path.empty()) {
                        for (const auto &position: path) {
                            std::cout << "Positions:" << position.first << "," << position.second;
                        }
                    }
                    std::cout << "Bugs Alive: " << bug->getisAlive1();
                    if (bug->getisAlive1() == "Slain by" || bug->getisAlive1() == "Died") {
                        std::cout << " " << bug->getisAlive1(false);
                    }
                    file << " Status: " << (bug->isAlive() ? "Alive" : "Dead") << endl;
                }
                file.close();
            }

        }
    }





///////////////
