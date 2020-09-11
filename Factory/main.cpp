#include "ToyFactory.h"

int main() {

    ToyFactory factory;

    //create a Car

    Toy* car = factory.create_toy(ToyType::Car);
    car->run();
    
    Toy* bike = factory.create_toy(ToyType::Bike);
    bike->run();

    Toy* plane = factory.create_toy(ToyType::Plane);
    plane->run();
}