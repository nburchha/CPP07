#include "Array.hpp"
#include "Array.tpp"

int main()
{
	// Test default constructor
	Array<int> a;
	std::cout << "Size of a: " << a.size() << std::endl;

	// Test empty array creation
	Array<int> a2(0);
	std::cout << "Size of a: " << a.size() << std::endl;

	// Test constructor with size parameter
	Array<int> b(5);
	std::cout << "Size of b: " << b.size() << std::endl;

	// Test copy constructor
	Array<int> c(b);
	std::cout << "Size of c: " << c.size() << std::endl;

	// Test assignment operator
	Array<int> d;
	d = b;
	std::cout << "Size of d: " << d.size() << std::endl;

	// Test subscript operator and out of bounds exception
	b[0] = 10;
	b[1] = 20;
	std::cout << "b[0]: " << b[0] << ", b[1]: " << b[1] << std::endl;

	// Test out of bounds
	try {
		std::cout << b[10] << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	// Test modifying original and copy
	c[0] = 100;
	std::cout << "b[0] after modifying c: " << b[0] << std::endl;
	std::cout << "c[0]: " << c[0] << std::endl;

	return 0;
}