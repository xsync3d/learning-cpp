
#include <iostream>


//Passing Arrays to Functions

void printArray(int theArray[], int sizeOfArray); //prototyping function

int main()
{
 
    int epic[3] = { 1,62,25 };
    int gamer[7] = { 267,37,3,788,3,73,3 };

    printArray(epic, 3);
    printArray(gamer, 7);

    //multi-dimensional arrays

    int multi[2][3] = { {2,4,76},{7,73,6} }; //each array is a row and each value is a column
    //visual representation
    //2, 4, 76
    //7, 73, 6
    std::cout << multi[1][2] << std::endl;

    for (int row = 0; row < 2; row++) 
    {
        for (int column = 0; column < 3; column++)
        {
            std::cout << multi[row][column] << " ";
        }
        std::cout << std::endl;
    }
}

void printArray(int theArray[], int sizeOfArray) //you usually wanna pass in the size of the array
{
    for (int x = 0; x < sizeOfArray; x++)
    {
        std::cout << theArray[x] << std::endl;
    }
}

