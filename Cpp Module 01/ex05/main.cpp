#include "Harl.h"

int	main(void) {
	// Objecto ELiandro da class Harl sendo criado
	Harl eliandro = Harl();

	// Uso do DEBUG
	std::cout << "\n >> Execução do DEBUG";
	eliandro.complain("DEBUG");

	// Uso do INFO
	std::cout << "\n\n >> Execução do INFO";
	eliandro.complain("INFO");

	// Uso do WARNING
	std::cout << "\n\n >> Execução do WARNING";
	eliandro.complain("WARNING");

	// Uso do ERROR
	std::cout << "\n\n >> Execução do ERROR";
	eliandro.complain("ERROR");

	// Uso do algo inexistente, arroz
	std::cout << "\n\n >> Execução do arroz";
	eliandro.complain("arroz");

	std::cout << std::endl;
	return (0);
}
