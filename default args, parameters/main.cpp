#include <iostream>


int volume(int l = 4, int w = 5, int h = 5); //function prototyping
/***In computer programming, a function prototype or function interface is a declaration of a function that specifies the 
function's name and type signature (arity, data types of parameters, and return type), but omits the function body.***/

int main()
{
    std::cout << volume();
    std::cout << volume(5); //makes lenght = 5
}

int volume(int l, int w, int h) {
    return l * w * h;
}

