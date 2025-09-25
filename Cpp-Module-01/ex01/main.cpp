#include "Zombie.h"

int main(void) {
	int num;
	Zombie*	myHorde;
	std::string nome;

	// Pegando os valores de N e name
	std::cout << "Digite o número de Zombies: ";
	std::cin >> num;
	std::cout << "Digite um nome pra os Zombies: ";
	std::cin >> nome;

	// Criando a horda
	myHorde = zombieHorde(num, nome);

	// Anuciando cada zombie da horda
	std::cout << "\nAnuciando os Zombies\n";
	for (int i = 0; i < num; i++) {
		// Anuciando o Anucio
		std::cout << i << "º zombie da horda | ";
		myHorde[i].announce();
	}

	// Liberação dos zombies
	std::cout << "\nLiberando os Zombies\n";
	delete[] myHorde;

	// Adeus Amigo!
	std::cout << "\nAdeus Amigo!\n";
	return (0);
}
