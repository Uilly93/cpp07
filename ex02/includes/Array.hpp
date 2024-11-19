#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "colors.hpp"
#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
	public:
	// Constructor
	Array(unsigned int n) {
		std::cout << GREEN << "Array Default Constructor called" << RESET << std::endl;
		_size = n;
		_array = new T[n];
		// for (unsigned int i = 0; i < _size; i++) {
		// 	_array[i] = T();
		// }
	}

	Array(const Array &src) {
		// std::cout << BLUE << "Array Copy Constructor called" << RESET << std::endl;
		_size = src.size();
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; ++i) {
			_array[i] = src._array[i];
		}
	}

	// Destructor
	~Array() {
		std::cout << RED << "Array Destructor called " << RESET << std::endl;
		delete[] _array;
	}

	// Operator Overload
	Array<T> operator=(const Array &src) {
		// std::cout << PURPLE << "Array Copy Assignment Operator called" << RESET << std::endl;
		if (this != &src) {
			delete[] this->_array;
			this->_size = src.size();
			this->_array = new T[_size];
			for (int i = 0; i < (int)_size; i++)
				this->_array[i] = src._array[i];
		}
		return *this;
	}

	int &operator[](int index) {
		if (index >= (int)this->_size || index < 0)
			throw std::out_of_range("wrong index");
		return _array[index];
	}

	// Methods
	unsigned int size() const {
		return _size;
	}

	private:
	Array() {
		_size = 0;
		new T[1];
	}
	T *_array;
	unsigned int _size;
};

#endif