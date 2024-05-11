#include <iostream>
#include <vector>
#include <string>
#include "BugClass.h"
#include "Board.h"


using namespace std;

    int main(){
        cout << "The Bug Board" << endl;
        //Create the vector / based via bug grid

        Board board;
        int id;

        cout<< "Type findBugById to find a bug you want to look up: " << endl;
        board.findBugById();
        cout<< "Type tapBugBoard to move the bugs on the board: " << endl;
        board.tapBugBoard();
        cout<< "Type displayAllBugs to show the bugs: " << endl;
        board.displayAllBugs();
        cout<< "Type displayHistoryOfBugs to show the history of the Bugs: " << endl;
        board.displayHistoryOfBugs();
        cout<< "Type writeTheLifeOfTheBugs for the summary and end of game: " << endl;
        board.writeTheLifeOfTheBugs();

        cin>>id;

        std::vector<BugClass *> ReadFromFile();


        return 0;
    }




///



///
////string . to . an . interger
//stoi()
////this allows you to manipulate a string, cuts in certain places
//stringstream