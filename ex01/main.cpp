#include <iostream>
#include "iter.hpp"

void printInt(const int &x)
{
	std::cout << x << " ";
}

void printFloat(const float &x)
{
	std::cout << x << " ";
}

void printString(const std::string &x)
{
	std::cout << x << " ";
}

int main()
{
	int intArray[] = {1, 2, 3, 4, 5};
	float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
	std::string stringArray[] = {"Hello", "world", "this", "is", "test"};

	std::cout << "Integer array: ";
	iter(intArray, 5, printInt);
	std::cout << std::endl;

	std::cout << "Float array: ";
	iter(floatArray, 5, printFloat);
	std::cout << std::endl;

	std::cout << "String array: ";
	iter(stringArray, 5, printString);
	std::cout << std::endl;

	return 0;
}
