#include "Zombie.h"

// Construtor padrão
Zombie::Zombie() {}

// Construtor com name
Zombie::Zombie(std::string name) {
	this->name = name;
}

// Destructor
Zombie::~Zombie() {
	std::cout << "\nO Zombie " << this->name << " foi destruído!";
}

// Function anuciar
void Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...";
}

// Setter para o nome
void Zombie::setName(std::string name) {
	this->name = name;
}
