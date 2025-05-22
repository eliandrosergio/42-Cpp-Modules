#include "header.h"

// o nosso querido main
int main(int ac, char **av) {
	// my essecial var
	int	status = 0;

	// se tiver 3 argumentos, vamos trabalhar
	if (ac == 4) {
		if (workingMyFile(av[1], av[2], av[3])) {
			status = 0;
		} else {
			status = 1;
		}
	} else {
		// se não tiver, paramos tudo
		std::cerr << "\n[ERRO] Número incorrecto de parametros\n\n";
		status = 1;
	}

	// retornando o valor de status
	return (status);
}
