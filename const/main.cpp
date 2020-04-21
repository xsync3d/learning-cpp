#include "Car.h"
#include <iostream>

int main()
{
    Car car;
    car.start();

    const Car consCar;
    //we need to create especial constant funcitons when we create constant objects
    consCar.start();
}
    

