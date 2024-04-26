#include <iostream>
#include <vector>
#include <string>
#include "BugClass.h"

using namespace std;

int main() {
        cout << "The Bug Board" << endl;
    //Create the vector / based via bug grid
        vector<BugClass> vec;
        vec.push_back(BugClass(1,1,""));
        vec.push_back(BugClass(2,2,""));
        vec.push_back(BugClass(3,2,""));
        vec.push_back(BugClass(4,4,""));
        vec.push_back(BugClass(5,2,""));
        vec.push_back(BugClass(6,3,""));

        for (BugClass b : vec) {
            std::cout << b.getSize() << std::endl;
            std::cout << b.getDirection() << std::endl;
            std::cout << b.getId() << std::endl;
          //  std::cout << b.getLocation() << std::endl;
            std::cout << b.isAlive1() << std::endl;

        }

        return 0;
    }

