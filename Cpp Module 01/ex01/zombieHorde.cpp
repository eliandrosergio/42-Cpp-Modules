#include "Zombie.h"

// Criador da horda de Zombies
Zombie* zombieHorde( int N, std::string name ) {
	// alocando N objetos Zumbis em uma única alocação
	Zombie* horde = new Zombie[N];

	// definindo o nome para geral dos zombies
	for (int i = 0; i < N; i++) {
		horde[i].setName(name);
	}

	// retornando o primeiro zombie (ponteiro)
	return (horde);
}
