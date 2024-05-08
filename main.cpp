#include <iostream>
#include <vector>
#include <string>
#include "BugClass.h"
#include <fstream> // used for access to the file input and output classes, ifstream and ofstream
#include <sstream>


void displayAllBugs(std::vector<BugClass *> vector1);

void findBugById(std::vector<BugClass *> vector1, int id);

using namespace std;

    int main(){
        cout << "The Bug Board" << endl;
        //Create the vector / based via bug grid
        vector<BugClass *> vec;
        std::vector<BugClass *> ReadFromFile();

        //1.Points to the ReadFromFile in Board class
        std::vector<BugClass*> bugs = ReadFromFile();
        for (BugClass* bug : bugs) { // Do something with bugs
            delete bug;   // Clean up
        }
        //2. Display all bugs
        displayAllBugs(bugs);
        // Clean up bugs (delete dynamically allocated memory)
        for (BugClass* bug : bugs) {
            delete bug;
        }
        //3.Find the bug via ID
        int bugId;
        findBugById(bugs, bugId);
        return 0;
    }

void findBugById(vector<BugClass *> vector1, int id) {

}


//2.Function
void displayAllBugs(vector<BugClass *> vector1) {
}
//1.Function
std::vector<BugClass *> ReadFromFile() {
    return std::vector<BugClass *>();
}
///



///
////string . to . an . interger
//stoi()
////this allows you to manipulate a string, cuts in certain places
//stringstream