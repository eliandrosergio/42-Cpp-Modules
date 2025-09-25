#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << "[Cat] Constructor chamado, pelo método padrão.\n";
}

Cat::~Cat() {
	std::cout << "[Cat] Destructor chamado.\n";
}

Cat::Cat( const Cat& other ) : Animal() {
	std::cout << "[Cat] Constructor chamado, pelo método de cópia.\n";
	*this = other;
}

Cat&	Cat::operator=( const Cat& other ) {
	std::cout << "[Cat] Operador de atribuição chamado.\n";
	if (this != &other)
		this->Animal::operator=(other);
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "[" << this->type << "] Miau\n";
}
