#include "Zombie.h"

// Alocaçcão para uso no seu escopo (stack)

// Criandor e anuciador do Zombie aleatório
void randomChump( std::string name ) {
	Zombie tempZombie(name);
	tempZombie.announce();
}
