#include <iostream>

int main()
{
    //this is a random number generator
    for (int x = 1; x < 25; x++) {
        std::cout << rand()%7 << std::endl;
        //modulo 7 makes it so it limits the numbers to its remainders
        //meaning its limited to 0-6
    }
}

