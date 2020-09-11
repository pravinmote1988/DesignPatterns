#ifndef __TOY_H
#define __TOY_H

#include <iostream>

enum class ToyType {
    Car,
    Bike,
    Plane
};

class Toy {

    ToyType _type;
    public:
    virtual void run() = 0;

};

class Car : public Toy {
    public:
    virtual void run() {std::cout << "Car is being driven" << std::endl;}
};

class Bike : public Toy {
    public:
    virtual void run() {std::cout << "Bike is running" << std::endl;}
};

class Plane : public Toy {
    public:
    virtual void run() {std::cout << "Plane is flying" << std::endl;}
};


#endif /* __TOY_H  */