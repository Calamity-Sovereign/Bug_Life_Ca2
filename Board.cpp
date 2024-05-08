#include <iostream>
#include <vector>
#include <string>
#include "BugClass.h"
#include <fstream> // used for access to the file input and output classes, ifstream and ofstream
#include <sstream>

using namespace std;

class Board {
    //1.Inisialise the bug class
    vector<BugClass *> ReadFromFile() {
        vector<BugClass *> tempVec;

        ifstream fin("bugs.txt"); // creates an input file stream to the file "input.txt"
        if (!fin.is_open()) // ensures the file input stream is opened correctly
        {
            char bugType; // creates a variable to store each word we read in from the file.
            while (!fin.eof()) // ensures we haven't reached the end of file (eof) ! = not
            {
                string tempLine; //temperary line reader
                char type;
                if (!( type == 'H')) { //Based on what type in the bug txt file
                    getline(fin, tempLine, ';');//String templine is just a placeholder
                    stringstream bugged1(tempLine);//Getline is a function that gets a single line from the file and stores it in tempLine -_-
                    tempLine.push_back(bugType);

                }
                if (!(type == 'C')) { //Based on what type in the bug txt file
                    getline(fin, tempLine, ';');//String templine is just a placeholder
                    stringstream bugged2(tempLine);//Getline is a function that gets a single line from the file and stores it in tempLine #_#
                    tempLine.push_back(bugType);
                }
                else {

                    std::cout << "Unable to open file"  << std::endl;
                }
            }
        }
        fin.close();
        return tempVec;
    }
    void displayAllBugs(const std::vector<BugClass*>& bugs) {
        std::cout << "ID\tType\tLocation\tSize\tDirection\tHop Length\tStatus" << std::endl;
        for (const BugClass* bug : bugs) {
            std::cout << bug->getId() << "\t"
                      << bug->getLocation().first << "," << bug->getLocation().second << ")\t"
                      << bug->getSize() << "\t" << bug->getDirection() << "\t"
                       << "\t" << bug->isAlive1() << std::endl;
        }
        void findBugById(const std::vector<BugClass*>& bugs, int bugId);
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



};


///////////////
