//
// Created by flori on 16/04/2024.
//

#ifndef BUG_LIFE_CA1_BUGCLASS_H
#define BUG_LIFE_CA1_BUGCLASS_H
#include <string>

class BugClass {


    int id;
    std::string type;
    std::pair<int, int> location;
    int size;
    std::string direction;
    int hopLength;
    bool isAlive;



public:
    BugClass(int id, int size, const std::string &direction, int x, int y);

    int getId() const;

    const std::pair<int, int> &getLocation() const;

    int getSize() const;

    const std::string &getDirection() const;

    bool isAlive1() const;

};


#endif //BUG_LIFE_CA1_BUGCLASS_H
