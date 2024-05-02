#include <iostream>
#include <vector>
#include <string>
#include "BugClass.h"
#include <fstream> // used for access to the file input and output classes, ifstream and ofstream
#include <sstream>

using namespace std;

vector<BugClass*>  ReadFromFile(){
    vector<BugClass*> tempVec;
    
    ifstream fin("input.txt"); // creates an input file stream to the file "input.txt"
    if(fin) // ensures the file input stream is opened correctly
    {
        string bug; // creates a variable to store each word we read in from the file.
        while(!fin.eof()) // ensures we haven't reached the end of file (eof)
        {
            string tempLine; //temperary line reader
            getline(fin,tempLine); // doesn't return anything
            stringstream bugged(tempLine);
        }
    }
    else
    {
        cout << "Unable to open file" <<endl;
    }
    return 0;
}




}

int main() {
    cout << "The Bug Board" << endl;
    //Create the vector / based via bug grid
    vector<BugClass*> vec;

            return 0;
        }


///
////string . to . an . interger
//stoi()
////this allows you to manipulate a string, cuts in certain places
//stringstream