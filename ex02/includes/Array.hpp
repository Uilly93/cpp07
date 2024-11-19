#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "colors.hpp"
#include <iostream>
#include <ostream>
#include <stdexcept>

template <typename T>
class Array {
	public:
	// Constructor
	Array(unsigned int n) {
		_size = n;
		_array = new T[n];
		for (unsigned int i = 0; i < _size; i++) {
			_array[i] = T();
		}
		std::cout << GREEN << "Array parameter Constructor called" << RESET << std::endl;
	}

	Array(const Array &src) {
		_size = src.size();
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			_array[i] = src._array[i];
		}
		std::cout << BLUE << "Array Copy Constructor called" << RESET << std::endl;
	}

	// Destructor
	~Array() {
		std::cout << RED << "Array Destructor called " << RESET << std::endl;
		delete[] _array;
	}

	// Operator Overload
	Array<T> operator=(const Array &src) {
		if (this != &src) {
			delete[] this->_array;
			this->_size = src.size();
			this->_array = new T[_size];
			for (int i = 0; i < (int)_size; i++)
				this->_array[i] = src._array[i];
		}
		std::cout << PURPLE << "Array Copy Assignment Operator called" << RESET << std::endl;
		return *this;
	}

	T &operator[](int index){
		if (index >= (int)this->_size || index < 0)
			throw std::out_of_range("wrong index");
		return _array[index];
	}

	// Methods
	unsigned int size() const {
		return _size;
	}

	void print() const {
		for(unsigned int i = 0; i < _size; i++)
			std::cout << _array[i] << RESET << std::endl;
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