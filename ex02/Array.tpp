#pragma once

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size)
{
	_array = new T[size];
}

template <typename T>
Array<T>::Array(const Array &other) : _size(other._size)
{
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = other._array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this == &other)
		return *this;
	delete[] _array;
	_size = other._size;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = other._array[i];
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw Array<T>::OutOfBoundsException();
	return _array[index];
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return "Index out of bounds";
}