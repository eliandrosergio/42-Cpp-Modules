#include <iostream>

int	main(void) {
	std::string myString = "HI THIS IS BRAIN";
	std::string* stringPTR = &myString;
	std::string& stringREF = myString;

	// Endereços de memória
	std::cout << "\nO endereço de memória da variável de string: " << &myString << std::endl;
	std::cout << "O endereço de memória mantido por stringPTR: " << stringPTR << std::endl;
	std::cout << "O endereço de memória mantido por stringREF: " << &stringREF << std::endl;

	// Valores
	std::cout << "\nO valor da variável string: " << myString << std::endl;
	std::cout << "O valor apontado por stringPTR: " << *stringPTR << std::endl;
	std::cout << "O valor apontado por stringREF: " << stringREF << "\n\n";
	
	return (0);
}
