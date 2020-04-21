

#include <iostream>

int main()
{
    int thing[5];
    int* p0 = &thing[0]; //points to the address of the first element
    int* p1 = &thing[1];
    int* p2 = &thing[2];
    std::cout << "p is at " << p0 << '\n';
    std::cout << "p is at " << p1 << '\n';
    std::cout << "p is at " << p2 << '\n';

    p0 += 2;

    std::cout << "p is now at " << p0 << '\n'; //bp0 += 2  means increment of "2" in memory
}
