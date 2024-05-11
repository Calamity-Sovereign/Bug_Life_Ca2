#include <iostream>
#include <vector>
#include <string>
#include "BugClass.h"


#ifndef BUG_LIFE_CA1_BOARD_H
#define BUG_LIFE_CA1_BOARD_H


class Board {
public:
    Board();

    void tapBugBoard();

    void displayHistoryOfBugs(const std::vector<BugClass *> &bugs);

    void findBugById(int bugId);

    void writeTheLifeOfTheBugs();

    std::vector<BugClass *> ReadFromFile();

    void displayAllBugs(const std::vector<BugClass *> &bugs);


public:
    std::vector<BugClass* > bugs;
};




#endif //BUG_LIFE_CA1_BOARD_H
