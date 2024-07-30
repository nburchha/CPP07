#include <iostream>
#include "iter.hpp"

/*class Awesome
{
public:
	Awesome(void) : _n(42) {}
	int get() const { return _n; }
	private:
	int _n;
};
std::ostream & operator<<(std::ostream & o, Awesome const & rhs) { o << rhs.get(); return o; }
template <typename T>
void print(T const & x) { std::cout << x << std::endl; return; }
int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];
	iter(tab, 5, print);
	iter(tab2, 5, print);
	return 0;
}*/
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
