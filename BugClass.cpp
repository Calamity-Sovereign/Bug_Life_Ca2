#include <iostream>
#include <vector>
#include <string>
#include "BugClass.h"


BugClass::BugClass(int id, int size, int direction, int x,int y)
{

    isAlive = true;

    location.first = x;
    location.second = y;
}

int BugClass::getId() const {
    return id;
}

const std::pair<int, int> &BugClass::getLocation() const {

    return location;
}

int BugClass::getSize() const {
    return size;
}

int BugClass::getDirection() const {
    return direction;
}

bool BugClass::isAlive1() const {
    return isAlive;

}
// changes the direction that the bug is facing at random out of 4
void BugClass::changeDirection() {
    srand(time(nullptr));
    direction = rand() % 4;
}

void BugClass::dance() {
    std::cout << "Bug " << id << " is dancing!" << std::endl;
}


void BugClass::isActive(bool active) {
    setActive = active;
}



