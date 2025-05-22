#include "Zombie.h"

// Construtor com name
Zombie::Zombie(std::string name) {
	this->name = name;
}

// Destrutor
Zombie::~Zombie() {
	std::cout << "\nO Zombie " << this->name << " foi destruído!";
}

// Announce
void Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...";
}
