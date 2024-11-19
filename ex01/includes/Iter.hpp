#include <iostream>
#include "colors.hpp"

template <typename T, typename A>
void iter(T *array, unsigned int size, void (*f)(A &arg)){
	for(unsigned int i = 0; i < size; i++)
		f(array[i]);
}