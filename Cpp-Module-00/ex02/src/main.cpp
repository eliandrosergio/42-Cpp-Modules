#include "funcs.hpp"

int		main( void ) {
	// saida: log de criação dos objectos
	Base	*basePtr = generate();
	Base	*baseRef = generate();

	// saida: \n, seguido de str da identificação dos objectos
	std::cout << std::endl << "Saida do \"identify\" (com ponteiro): ";
	identify(basePtr);
	std::cout << "Saida do \"identify\" (com referência): ";
	identify(*baseRef);

	// saida: \n, seguido de log de destruição dos objectos
	std::cout << std::endl;
	delete basePtr;
	delete baseRef;

	return (0);
}
