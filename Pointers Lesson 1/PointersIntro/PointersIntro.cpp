/*
Pointers are variables that store the memory address of something.
They are typically used to pass values by-reference. 
They can also be used as a solution for multiple other problems such as; returning multiple values from a function, dynamic memory allocation, and more..
*/
#include <iostream>

int main()
{
    int n = 5;
    std::cout << &n << std::endl; // Prefix the variable name with '&' to get the memory address of the variable.

    int* ptr = &n; // This variable is pointer for the variable 'n'. The '*' suffix is added to 'int' to define this as a pointer.
    std::cout << ptr << std::endl;

    std::cout << *ptr << std::endl; // Prefix a pointer with '*' to access the value stored at the memory address. This is called derefrencing.

    *ptr = 10; // This changes the value at the memory address location to 10.
    std::cout << n << std::endl; // the value at n has been changed because of the line above.
}