#pragma once

#include <iostream>

template <typename T>
void iter(T* array, int len, void (*f)(T const &))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}