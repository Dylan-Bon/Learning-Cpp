#include <iostream>

int main()
{
    int luckyNumbers[5];
    //std::cout << luckyNumbers << std::endl; //this prints out the memory address stored at the first element in the array.
    //std::cout << luckyNumbers[2] << std::endl; //this line dereferences the value stored within the array at position 2
    //std::cout << *(luckyNumbers + 2) << std::endl;//this line dereferences the value stored within the array at position 2
 
    for (int i = 0; i < sizeof(luckyNumbers)/sizeof(luckyNumbers[0]); i++) { //sizeof array gets bytes allocated to the array, this is divided by the size of one element to find how many elements are in the array.
        std::cout << "Number: ";
        std::cin >> luckyNumbers[i];
    }

    for (int i = 0; i < 6; i++) {
        std::cout << *(luckyNumbers + i) << "  "; //the last value will be a memory address of something that has nothing to do with luckyNumbers
    }

    
}
