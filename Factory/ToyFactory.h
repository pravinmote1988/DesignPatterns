
#ifndef __TOYFACTORY_H
#define __TOYACTORY_H

#include "Toy.h"

class ToyFactory {
    public:
    Toy* create_toy(ToyType type) {
        Toy *toy;
        switch (type) {
        case ToyType::Car :
            toy = new Car();
            break;

        case ToyType::Bike :
            toy = new Bike();
            break;

        case ToyType::Plane :
            toy = new Plane();
            break;

        default :
            std::cout << "wrong toy type" << std::endl;
            toy =  nullptr;
        }

        return toy;
    }
};


#endif /* __TOYFACTORY_H */