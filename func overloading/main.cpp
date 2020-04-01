#include <iostream>

void printNumber(int x) 
{
    std::cout << x << std::endl;
}
void printNumber(float x)
{
    std::cout << x << std::endl;
}

int main()
{
    int a = 324;
    float b = 3335.1;

    printNumber(a);
    printNumber(b);
}

