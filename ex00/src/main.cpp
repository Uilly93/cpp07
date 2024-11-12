#include "../includes/Whatever.hpp"
#include "../includes/colors.hpp"
#include <cstddef>
#include <iostream>

int main(void) {
	{
		int a = 2;
		int b = 3;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << GREEN << "*SWAP a and b values*" << RESET << std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	}
	{
		std::string a = "chaine1";
		std::string b = "chaine2";
		::swap(a, b);
		std::cout << GREEN << "*SWAP a and b values*" << RESET << std::endl;
		std::cout << "c = " << a << ", d = " << b << std::endl;
		std::cout << "min( c, d ) = " << ::min(a, b) << std::endl;
		std::cout << "max( c, d ) = " << ::max(a, b) << std::endl;
	}
	{
		float a = 42.42f;
		float b = 42.41f;
		std::cout << "e = " << a << ", f = " << b << std::endl;
		::swap(a, b);
		std::cout << GREEN << "*SWAP a and b values*" << RESET << std::endl;
		std::cout << "e = " << a << ", f = " << b << std::endl;
		std::cout << "min( e, f ) = " << ::min(a, b) << std::endl;
		std::cout << "max( e, f ) = " << ::max(a, b) << std::endl;
	}
	{
		std::size_t a = 42;
		std::size_t b = 21;
		std::cout << "e = " << a << ", f = " << b << std::endl;
		::swap(a, b);
		std::cout << GREEN << "*SWAP a and b values*" << RESET << std::endl;
		std::cout << "e = " << a << ", f = " << b << std::endl;
		std::cout << "min( e, f ) = " << ::min(a, b) << std::endl;
		std::cout << "max( e, f ) = " << ::max(a, b) << std::endl;
	}
	return 0;
}