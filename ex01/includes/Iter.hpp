#include <iostream>
#include "colors.hpp"

template <typename T, typename A>
void iter(T *array, unsigned int size, void (*f)(A &arg)){
	for(unsigned int i = 0; i < size; i++)
		f(array[i]);
}

template <typename A>
void print(A &value) {
	std::cout << GREEN << "[" << NGREEN << value << GREEN << "]" << RESET;
}

template <typename A>
void incrementValue(A &value) {
	++value;
}

template <typename A>
void upper(A &value) {
	for (int i = 0; value[i]; i++)
		value[i] = std::toupper(value[i]);
}