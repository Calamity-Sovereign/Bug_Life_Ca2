//
// Created by flori on 26/04/2024.
//

#ifndef BUG_LIFE_CA1_CRAWLER_H
#define BUG_LIFE_CA1_CRAWLER_H



#include <iostream>
#include "BugClass.h"

class Crawler: public BugClass {
    Crawler(int id, int size, int &direction, int x, int y);


    void move() override;
};



////





#endif //BUG_LIFE_CA1_CRAWLER_H
