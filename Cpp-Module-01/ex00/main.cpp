#include "Zombie.h"

int main(void) {
	// Var(s) para os nomes
	std::string nome1, nome2;

	// Pedindo o primeiro nome
	std::cout << "Digite o nome de Zombie (heap alloc): ";
	std::cin >> nome1;

	// Pegando o retorno da Zombie
	Zombie* myZombie = newZombie(nome1);
	std::cout << "\nAgora vou anuciar o Zombie \"" << nome1 << "\"" << std::endl;

	// Anuciando-o (Zombie 1)
	myZombie->announce();

	// Pedindo o segundo nome
	std::cout << "\nDigite outro nome de Zombie (stack alloc): ";
	std::cin >> nome2;

	// Anuciando-o (Zombie 2)
	std::cout << "\nAgora vou anuciar o Zombie \"" << nome2 << "\"" << std::endl;
	randomChump(nome2);

	// Destruido (Zombie 2)
	std::cout << "\nAgora vamos limpar o zombie \"" << nome1 << "\", que esta em heap\n";
	delete myZombie;

	// Adeus Amigo!
	std::cout << "\nAdeus Amigo!\n";
	return (0);
}
