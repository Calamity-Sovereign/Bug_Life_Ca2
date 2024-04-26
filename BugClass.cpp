#include <iostream>
#include <vector>
#include <string>
#include "BugClass.h"


BugClass::BugClass(int id, int size, const std::string &direction)
        : id(id), location(location), size(size), direction(direction){


    isAlive = true;
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

const std::string &BugClass::getDirection() const {
    return direction;
}

bool BugClass::isAlive1() const {
    return isAlive;
}




