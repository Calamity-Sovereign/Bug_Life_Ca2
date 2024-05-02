//
// Created by flori on 26/04/2024.
//

#ifndef BUG_LIFE_CA1_HOPPER_H
#define BUG_LIFE_CA1_HOPPER_H


#include <iostream>
#include "../BugClass.h"

class Hopper: public BugClass {
    Hopper(int id, int size, int &direction, int x, int y, int hoplenght);

    protected:
        int hoplenght = 2;

        void move() override;
};



#endif //BUG_LIFE_CA1_HOPPER_H
