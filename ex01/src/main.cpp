#include "../includes/Iter.hpp"
#include "../includes/colors.hpp"

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

int main() {
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::string tab[] = {"bonjour", "voici", "le", "cpp", "07", "."};

	std::cout << NPURPLE << "--------------------------------------------------------------"
			  << RESET << std::endl;
	std::cout << NGREEN << "printing original Array and string Tab values" << RESET << std::endl;
	std::cout << NPURPLE << "--------------------------------------------------------------"
			  << RESET << std::endl;
	iter(array, 11, print<int>);
	iter(tab, 5, print<std::string>);
	std::cout << std::endl;
	std::cout << NPURPLE << "--------------------------------------------------------------"
			  << RESET << std::endl;
	std::cout << NGREEN << "printing itered Array string Tab values" << RESET << std::endl;
	std::cout << NPURPLE << "--------------------------------------------------------------"
			  << RESET << std::endl;
	iter(array, 11, incrementValue<int>);
	iter(tab, 6, upper<std::string>);
	iter(array, 11, print<int>);
	iter(tab, 6, print<std::string>);
	std::cout << std::endl;
	return 0;
}
