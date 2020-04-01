#include <iostream>

int g_obama = 20; //use 'g_' to represent global variables
int obama = 20;
//vars outside functions (global variables) are available to all functions 

int main()
{
	double obama = 17;
	std::cout << ::obama << std::endl;
	//double colon (::) is the Unary Scope Resolution Operator
	//the output will be 20 if youre using the unary scope resolution operator since it will point towards the variable outside the function
	std::cout << obama << std::endl;
	//this will output 17
}