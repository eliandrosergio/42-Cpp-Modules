#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << "[Dog] Constructor chamado, pelo método padrão.\n";
}

Dog::~Dog() {
	std::cout << "[Dog] Destructor chamado.\n";
}

Dog::Dog( const Dog& other ) : Animal() {
	std::cout << "[Dog] Constructor chamado, pelo método de cópia.\n";
	*this = other;
}

Dog&	Dog::operator=( const Dog& other ) {
	std::cout << "[Dog] Operador de atribuição chamado.\n";
	if (this != &other)
		this->Animal::operator=(other);
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "[" << this->type << "] Woof\n";
}
