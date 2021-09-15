#include <iostream>

int main() {
	int size;
	std::cout << "Size: ";
	std::cin >> size;

	int* myArray = new int[size]; // 'new' allocates memory after compile time

	for (int i = 0; i < size; i++) {
		std::cout << "Array[" << i << "] ";
		std::cin >> myArray[i];
	}

	for (int i = 0; i < size; i++) {
		//std::cout << myArray[i] << std::endl;
		std::cout << *(myArray + i) << std::endl;

		
	}
	//array no longer needed, so deallocate memory
	delete[]myArray;
	myArray = NULL;
}