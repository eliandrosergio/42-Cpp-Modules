#include "Harl.h"

int	main(int ac, char **av) {
	// Retornando em caso de argumentos inválido
	if (ac != 2) {
		std::cout << "[ERRO] Número inválido de argumentos!\n";
		return (1);
	}

	Harl eliandro = Harl(); // Criando o objecto Harl
	eliandro.complain(av[1]); // Rodando o complain

	return (0); // retornando
}
