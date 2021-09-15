#include <iostream>

int main()
{
    int rows, cols;
    std::cout << "Enter number of rows then columns: ";
    std::cin >> rows >> cols;

    int** table = new int*[rows];
    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols];
    }

    table[1][2] = 88;

    //deallocate now since not needed
    for (int i = 0; i < rows; i++) {
        delete[]table[i];
    }
    
    delete[]table;
    table = NULL;
}

