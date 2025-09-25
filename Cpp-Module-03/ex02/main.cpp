#include "FragTrap.hpp"

int		main( void ) {
	std::cout << std::endl;
	{
		FragTrap	ninguem;
		FragTrap	elian("Elian");

		ninguem = elian;
		std::cout << std::endl;
		for (int i = 0; i < 101; i++) {
			std::string	separa = " | ";
			if (i < 9) separa = "   | ";
			else if (i < 99) separa = "  | ";

			std::cout << (i + 1) << separa;
			ninguem.attack("Bivanio");
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	{
		FragTrap	elian("Elian");
		FragTrap	cloneElian(elian);

		std::cout << std::endl;
		for (int i = 0; i < 101; i++) {
			std::string	separa = " | ";
			if (i < 9) separa = "   | ";
			else if (i < 99) separa = "  | ";

			std::cout << (i + 1) << separa;
			cloneElian.beRepaired(1);
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	{
		FragTrap	elian("Elian");
		FragTrap	cloneElian(elian);

		std::cout << std::endl;
		cloneElian.takeDamage(50);
		cloneElian.takeDamage(50);
		cloneElian.highFivesGuys();
		cloneElian.attack("Bivanio");
		cloneElian.beRepaired(1);
		std::cout << std::endl;
	}

	std::cout << "\nAdeus amigo!\n";
	return (0);
}
