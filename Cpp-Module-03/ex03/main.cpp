#include "DiamondTrap.hpp"

int		main( void ) {
	std::cout << std::endl;
	{
		DiamondTrap	ninguem;
		DiamondTrap	elian("Elian");

		ninguem = elian;
		std::cout << std::endl;
		for (int i = 0; i < 51; i++) {
			std::cout << (i + 1) << ((i < 9) ? "  | " : " | ");
			ninguem.attack("Bivanio");
		}
		ninguem.beRepaired(1);
		std::cout << std::endl;
	}

	std::cout << std::endl;
	{
		DiamondTrap	elian("Elian");
		DiamondTrap	cloneElian(elian);

		std::cout << std::endl;
		for (int i = 0; i < 51; i++) {
			std::cout << (i + 1) << ((i < 9) ? "  | " : " | ");
			cloneElian.beRepaired(1);
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	{
		DiamondTrap	elian("Elian");
		DiamondTrap	cloneElian(elian);

		std::cout << std::endl;
		cloneElian.takeDamage(50);
		cloneElian.takeDamage(50);
		cloneElian.beRepaired(1);
		cloneElian.attack("Bivanio");
		cloneElian.guardGate();
		cloneElian.highFivesGuys();
		cloneElian.whoAmI();
	}

	std::cout << "\nAdeus amigo!\n";
	return (0);
}
