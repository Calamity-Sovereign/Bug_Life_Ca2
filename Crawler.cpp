//
// Created by flori on 26/04/2024.
//

#include "Crawler.h"



Crawler::Crawler(int id, int size, int &direction, int x, int y): BugClass(id, size, direction, x, y) {

}

void Crawler::move() {

    switch (direction) {
        //North
        case 1:
            if(location.second != 0){ //if at row 0 , no move up
                location.first -= 1;
            }else{
                changeDirection();
            }
            //South
        case 2:
            if(location.second != 9){ //if at row 9 , no move down
                location.first += 1;
            }else{
                changeDirection();
            }
            //West
        case 3:
            if(location.first != 9){ //if at column 0 , no move left \_@_@>
                location.second += 1;
            }else{
                changeDirection();
            }
            //East
        case 4:
            if(location.first != 0){ //if at column 0 , no move right
                location.second -= 1;
            }else{
                changeDirection();
            }
    }

}