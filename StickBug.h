//
// Created by flori on 11/05/2024.
//

#ifndef BUG_LIFE_CA1_STICKBUG_H
#define BUG_LIFE_CA1_STICKBUG_H


#include <iostream>
#include "BugClass.h"


class StickBug: public BugClass {

        StickBug(int id, int size, int &direction, int x, int y);


        void move() override;
    };



#endif //BUG_LIFE_CA1_STICKBUG_H
