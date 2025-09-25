#include "ScavTrap.hpp"

int		main( void ) {
	std::cout << std::endl;
	{
		ScavTrap	ninguem;
		ScavTrap	elian("Elian");

		ninguem = elian;
		std::cout << std::endl;
		for (int i = 0; i < 51; i++) {
			std::cout << (i + 1) << ((i < 9) ? "  | " : " | ");
			ninguem.attack("Bivanio");
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	{
		ScavTrap	elian("Elian");
		ScavTrap	cloneElian(elian);

		std::cout << std::endl;
		for (int i = 0; i < 51; i++) {
			std::cout << (i + 1) << ((i < 9) ? "  | " : " | ");
			cloneElian.beRepaired(1);
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	{
		ScavTrap	elian("Elian");
		ScavTrap	cloneElian(elian);

		std::cout << std::endl;
		cloneElian.takeDamage(50);
		cloneElian.takeDamage(50);
		cloneElian.guardGate();
		cloneElian.beRepaired(1);
		cloneElian.attack("Bivanio");
		std::cout << std::endl;
	}

	std::cout << std::endl;
	{
		ClapTrap*	amigos[2];

		amigos[0] = new ClapTrap("clapzinho");
		amigos[1] = new ScavTrap("scavzinho");

		std::cout << std::endl;
		amigos[0]->attack("scavzinho");
		amigos[1]->attack("clapzinho");
		std::cout << std::endl;

		delete amigos[0];
		delete amigos[1];
	}

	std::cout << "\nAdeus amigo!\n\n";
	return (0);
}
