#include <iostream>
#include "Car.h"


//contructor
Car::Car(int a, int b)
	: regVar(a), 
	consVar(b) //list to define variables and their values
{
}


void Car::print() 
{
	std::cout << regVar, consVar;
}
