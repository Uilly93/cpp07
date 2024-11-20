#include "../includes/Array.hpp"
#include "../includes/colors.hpp"
#include <iostream>
#include <sstream>

#define ALPHA 26
#define ARRAY 10

std::string to_string(size_t i) {
	std::stringstream s;
	s << i;
	return s.str();
}

int main(void) {
	try {
		std::cout << NPURPLE << "--------------------------------------------------------------"
				  << RESET << std::endl;
		std::cout << NGREEN << "Printing [ints]" << RESET << std::endl;
		std::cout << NPURPLE << "--------------------------------------------------------------"
				  << RESET << std::endl;
		{
			Array<int> tab(ARRAY);
			Array<int> tab2 = tab;
			for (int i = 0; i < ARRAY; i++) {
				tab2[i] = i;
			}
			tab2.print();
		}
		std::cout << NPURPLE << "--------------------------------------------------------------"
				  << RESET << std::endl;
		std::cout << NGREEN << "Printing [strings]" << RESET << std::endl;
		std::cout << NPURPLE << "--------------------------------------------------------------"
				  << RESET << std::endl;
		{
			Array<std::string> tab(ARRAY);
			Array<std::string> tab2(tab);
			for (std::size_t i = 0; i < ARRAY; i++) {
				tab2[i] = "hello world " + to_string(i * 10);
			}
			tab2.print();
		}
		std::cout << NPURPLE << "--------------------------------------------------------------"
				  << RESET << std::endl;
		std::cout << NGREEN << "Printing [chars]" << RESET << std::endl;
		std::cout << NPURPLE << "--------------------------------------------------------------"
				  << RESET << std::endl;
		{
			Array<char> tab(ALPHA);
			Array<char> tab2(3);
            tab2 = tab;
			for (std::size_t i = 0; i < ALPHA; i++) {
				tab2[i] = i + 65;
			}
			tab2.print();
		}
        std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
        std::cout << NGREEN << "Printing [Floats]" << RESET << std::endl;
        std::cout << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
		{
			Array<float> tab(ARRAY);
			Array<float> tab2 = tab;
			for (float i = 0.2; i < ARRAY; i++) {
				tab2[i] = i;
			}
			tab2.print();
		}
		// {                                                    // Uncomment to see error handling
		// 	Array<char> tab(0); // Wrong input
		// 	Array<char> tab2(tab);
		// 	for (std::size_t i = 0; i < ALPHA; i++) {
		// 		tab2[i] = i + 65;
		// 	}
		// 	tab2.print();
		// }
		// {
		// 	Array<int> tab(ARRAY);
		// 	Array<int> tab2(tab);
		// 	tab[-1] = 3; // wrong input
		// 	tab2.print();
		// }
	} catch (std::exception &e) {
		std::cout << NRED << e.what() << RESET << std::endl;
	}
	return 0;
}