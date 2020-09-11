#ifndef __TOY_H
#define __TOY_H

#include <iostream>

enum class ToyType {
    Car,
    Bike,
    Plane
};

class ToyFactory;

class Toy {
    
    protected:
    ToyType _type;
    public:
    virtual void run() = 0;
};

class Car : public Toy {
    friend class ToyFactory;

    Car() { _type = ToyType::Car;}
    public:
    virtual void run() {std::cout << "Car is being driven" << std::endl;}
};

class Bike : public Toy {
    friend class ToyFactory;

    Bike() {_type = ToyType::Bike;}
    public:
    virtual void run() {std::cout << "Bike is running" << std::endl;}
};

class Plane : public Toy {
    friend class ToyFactory;

    Plane() {_type = ToyType::Plane;}
    public:
    virtual void run() {std::cout << "Plane is flying" << std::endl;}
};


#endif /* __TOY_H  */