#include "Harl.h"

int	main(void) {
	// Objecto ELiandro da class Harl sendo criado
	Harl eliandro = Harl();

	// Uso do DEBUG
	std::cout << ">> Execução do DEBUG\n";
	eliandro.complain("DEBUG");

	// Uso do INFO
	std::cout << "\n >> Execução do INFO\n";
	eliandro.complain("INFO");

	// Uso do WARNING
	std::cout << "\n >> Execução do WARNING\n";
	eliandro.complain("WARNING");

	// Uso do ERROR
	std::cout << "\n >> Execução do ERROR\n";
	eliandro.complain("ERROR");

	// Uso do algo inexistente, arroz
	std::cout << "\n >> Execução do arroz\n";
	eliandro.complain("arroz");

	return (0);
}
