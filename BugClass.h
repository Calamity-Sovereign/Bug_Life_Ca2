//
// Created by flori on 16/04/2024.
//

#ifndef BUG_LIFE_CA1_BUGCLASS_H
#define BUG_LIFE_CA1_BUGCLASS_H
#include <string>

class BugClass {


protected:
    int direction;
    int id;
    std::string type;
    std::pair<int, int> location;
    int size;
    int hopLength;
    bool isAlive;
    bool setActive = true;

public:
    BugClass(int id, int size, int direction, int x, int y);

    int getId() const;

    const std::pair<int, int> &getLocation() const;

    int getSize() const;

    int getDirection() const;

    bool isAlive1() const;

    virtual void move() =0;

    void changeDirection();

    virtual void dance();

    void isActive(bool active);

};


#endif //BUG_LIFE_CA1_BUGCLASS_H
