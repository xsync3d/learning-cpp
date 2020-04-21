
#include <iostream>

void passByReference(int &x);
void passByAddress(int* x);
void passByValue(int x);

int main()
{
    int num1 = 53;
    int num2 = 53;
    int num3 = 53;

    passByValue(num1);
    passByAddress(&num2); //since the funciton is taking the memory address rather than the variable's value we need an '&'
    passByReference(num3);

    std::cout << "num1 is now " << num1 << '\n';
    std::cout << "num2 is now " << num2 << '\n';
    std::cout << "num3 is now " << num3 << '\n';
}


void passByValue(int x) 
{
    x = 9;
}

void passByReference(int &x)
{
    x = x + 1;
}

void passByAddress(int* x) 
{
    *x = 9;
}


