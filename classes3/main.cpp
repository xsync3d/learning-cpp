
#include "Car.h"
#include <iostream>

//Arrow Member Selection Operator

int main()
{
    Car car;
    Car* car_p = &car;
    car.start();
    car_p->start;
    //whenever youre using a pointer to access stuff inside a class you need to use the arrow member selection operator
}
