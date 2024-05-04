//
// Created by flori on 26/04/2024.
//


#include <string>
#include "Hopper.h"


Hopper::Hopper(int id, int size, int &direction, int x, int y, int hoplenght): BugClass(id, size, direction, x, y){

    this->hoplenght = hoplenght;

}

void Hopper::move() {
    if (!isAlive) {
        return;
    } else {
        switch (direction) {
            //North
            case 1:
                if (location.second != 0) {
                    if (location.first - hoplenght < 0) {
                        location.first = 0;
                    } else {
                        location.first -= hoplenght;
                    }
                } else {
                    changeDirection();
                }
                //South
            case 2:
                if (location.second != 9) { //if at row 0 , no move up '-'
                    if (location.first + hoplenght < 9) {
                        location.first = 9;
                    } else {
                        location.first += hoplenght;
                    }
                } else {
                    changeDirection();
                }
                //West
            case 3:
                if (location.first != 9) { //if at column 0 , no move left
                    if (location.second + hoplenght < 9) {
                        location.second = 9;
                    } else {
                        location.second += hoplenght;
                    }
                } else {
                    changeDirection();
                }
                //East
            case 4:
                if (location.first != 0) { //if at column 0 , no move right
                    if (location.second - hoplenght < 0) {
                        location.second = 0;
                    } else {
                        location.second -= hoplenght;
                    }
                } else {
                    changeDirection();
                }
        }

    }
}
