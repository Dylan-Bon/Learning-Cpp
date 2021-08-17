// void pointers are used as they can hold the address of a variable of any data type.
// void pointers cannot be directly dereferenced.
#include <iostream>

void print(void* ptr, char type) {
	switch (type) {
	case 'i':
		std::cout << *((int*)ptr) << std::endl;
		break;
	case 'c':
		std::cout << *((char*)ptr) << std::endl;
		break;
	case 'f':
		std::cout << *((float*)ptr) << std::endl;
	default:
		break;
	}
}
int main()
{
    int number = 5;
    print(&number, 'i');
	char ch = 'd';
	print(&ch, 'c');
	float decimal = 1.2345;
	print(&decimal, 'f');
}