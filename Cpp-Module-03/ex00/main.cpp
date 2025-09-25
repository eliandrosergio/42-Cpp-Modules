#include "ClapTrap.hpp"

int		main( void ) {
	std::cout << std::endl;
	{
		ClapTrap	ninguem;
		ClapTrap	elian("Elian");

		ninguem = elian;
		std::cout << std::endl;
		for (int i = 0; i < 11; i++) {
			std::cout << (i + 1) << ((i < 9) ? "  | " : " | ");
			ninguem.attack("Bivanio");
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	{
		ClapTrap	elian("Elian");
		ClapTrap	cloneElian(elian);

		std::cout << std::endl;
		for (int i = 0; i < 11; i++) {
			std::cout << (i + 1) << ((i < 9) ? "  | " : " | ");
			cloneElian.beRepaired(1);
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	{
		ClapTrap	elian("Elian");

		std::cout << std::endl;
		elian.takeDamage(2);
		elian.takeDamage(10);
		elian.takeDamage(1);
		elian.beRepaired(1);
		elian.attack("Bivanio");
		std::cout << std::endl;
	}

	std::cout << "\nAdeus amigo!\n";
	return (0);
}
