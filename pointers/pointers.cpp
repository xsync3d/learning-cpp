

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
    int* p = new int; //int pointer, p points to int's value

    *p = 5; //since p points to int's value it is set to 5

    delete p; //gets rid of garbage for the next operation to come by deallocating memory

    p = NULL; //its a good programming practice to set the pointer var to NULL or 0 

    p = new int(10); //initialized to have the value of 10
    /*we are creating an new int on the heap
    we also reasigned our our pointer 'p' to point to the new int we have created*/


}