#include <iostream>
#include <vector>
#include <string>
#include "BugClass.h"
#include <fstream> // used for access to the file input and output classes, ifstream and ofstream
#include <sstream>

#ifndef BUG_LIFE_CA1_BOARD_H
#define BUG_LIFE_CA1_BOARD_H

using namespace std;

class Board {
    vector<BugClass *> ReadFromFile() {
        vector<BugClass *> tempVec;

        ifstream fin("bugs.txt"); // creates an input file stream to the file "input.txt"
        if (fin) // ensures the file input stream is opened correctly
        {
            string bug; // creates a variable to store each word we read in from the file.
            while (!fin.eof()) // ensures we haven't reached the end of file (eof)
            {
                string tempLine; //temperary line reader
                char type;
                if (!('H' == type)) {
                    getline(fin, tempLine, ';');
                    stringstream bugged1(tempLine);
                }
                if (!(type == 'C')) {
                    getline(fin, tempLine, ';'); // doesn't return anything
                    stringstream bugged2(tempLine);
                }
                else {
                    std::cout << "Unable to open file"  << std::endl;
                }
            }
        }
    }
};

#endif //BUG_LIFE_CA1_BOARD_H
