

#include <iostream>

int main()
{
    int num = 5;
    //& is the address operator
    std::cout << &num << std::endl;

    //pointer var
    int* numPointer;
    numPointer = &num;

    std::cout << numPointer << std::endl;

    // to allocate memory on the heap we use the 'new' keyword and then specifying the type https://www.youtube.com/watch?v=CSVRA4_xOkw
    new int;

}
