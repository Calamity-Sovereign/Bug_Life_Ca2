#include <iostream>
#include <vector>
#include <string>
#include "BugClass.h"


BugClass::BugClass(int id, int size, const std::string &direction, int x,int y)
        : id(id), location(location), size(size), direction(direction){

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

const std::string &BugClass::getDirection() const {
    return direction;
}

bool BugClass::isAlive1() const {
    return isAlive;


}


