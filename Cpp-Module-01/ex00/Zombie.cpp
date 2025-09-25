#include "Zombie.h"

// Construtor com name
Zombie::Zombie(std::string name) {
	this->name = name;
}

// Destrutor
Zombie::~Zombie() {
	std::cout << "O Zombie " << this->name << " foi destruído!\n";
}

// Announce
void Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
