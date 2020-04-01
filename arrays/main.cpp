
#include <iostream>


int main()
{
    int numbers[5] = { 56,73,55,6,32 }; //array initializer list
    std::cout << numbers[0];



    //create an array Using Loops
    int epic[9] = {};
    
    for (int x = 0; x <= 8; x++) 
    {
        epic[x] = 99;
        std::cout << x << "--" << epic[x] << std::endl;
    }

    //using arrays in calculations

    int obama[5] = { 20 ,54 ,76, 1032, 314 };
    int sum = 0;

    for (int x = 0; x < 5; x++) 
    {
        sum =+ obama[x];
        std::cout << sum << std::endl;
    }

}



