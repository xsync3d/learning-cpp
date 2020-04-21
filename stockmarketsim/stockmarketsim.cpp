#include <iostream>
#include <cmath>

int main()
{
    float amount;
    float principal = 10000;
    float rate = .01;

    for (int day = 1; day <= 20; day++)
    {
        amount = principal * pow(1 + rate, day);
        std::cout << day +
    }
}
