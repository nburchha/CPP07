#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int size);
		Array(const Array &other);
		~Array();
		Array &operator=(const Array &other);
		class OutOfBoundsException : public std::exception
		{
			public:
			virtual const char *what() const throw();
		};
		unsigned int size() const;
		T &operator[](unsigned int index);

};