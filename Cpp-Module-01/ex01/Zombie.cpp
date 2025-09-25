#include "Zombie.h"

// Construtor padrão
Zombie::Zombie() {}

// Construtor com name
Zombie::Zombie(std::string name) {
	this->name = name;
}

// Destructor
Zombie::~Zombie() {
	std::cout << "O Zombie " << this->name << " foi destruído!\n";
}

// Function anuciar
void Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

// Setter para o nome
void Zombie::setName(std::string name) {
	this->name = name;
}
