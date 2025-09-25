#include "Zombie.h"

// Alocaçcão para uso fora do seu escopo (head)

// Criador de novo Zombie
Zombie* newZombie( std::string name ) {
	Zombie* tempZombie = new Zombie(name);
	return (tempZombie);
}
