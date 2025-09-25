#include "ScalarConverter.hpp"

int		main( int ac, char **av ) {
	if (ac == 2) {
		std::string	literal(av[1]);
		ScalarConverter::convert(literal);
	}
	else 
		std::cout << "Mano, digite um único parametro! 🙄️" << std::endl;
	return (0);
}
