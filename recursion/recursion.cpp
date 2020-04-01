#include <iostream>

int findFactorial(int x);

int main()
{
    std::cout << findFactorial(6) << std::endl;
}


int findFactorial(int x) 
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return x * findFactorial(x - 1);
    }
    //base case
}

