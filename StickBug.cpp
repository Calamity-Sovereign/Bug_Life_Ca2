//
// Created by flori on 11/05/2024.
//

#include "StickBug.h"


StickBug::StickBug(int id, int size, int &direction, int x, int y): BugClass(id, size, direction, x, y) {

}
void StickBug::move() {
    if (!isAlive){
        return;
    }else {
        switch (direction) {
            //North
            case 1:
                if (location.second != 0) { //if at row 0 , no move up
                    location.first -= 1;
                } else {
                    changeDirection();
                }
                //South
            case 2:
                if (location.second != 9) { //if at row 9 , no move down
                    location.first += 1;
                } else {
                    changeDirection();
                }
                //West
            case 3:
                if (location.first != 9) { //if at column 0 , no move left \_@_@>
                    location.second += 1;
                } else {
                    changeDirection();
                }
                //East
            case 4:
                if (location.first != 0) { //if at column 0 , no move right
                    location.second -= 1;
                } else {
                    changeDirection();
                }
                break;
        }

        // Check if there's a bug at the new location
        int bugs;
        for (BugClass *Bug: bugs) {
            if (Bug != this && Bug->getLocation() == location) {
                // Found another bug at the same location
                std::cout << "StickBug " << id << " has encountered another bug." << std::endl;
                std::cout << "Making the other bug dance and inactive." << std::endl;

                // Make the other bug dance and inactive
                Bug->dance();
                Bug->isActive(false);

                // StickBug continues moving
                break;
            }
        }
    }
}

