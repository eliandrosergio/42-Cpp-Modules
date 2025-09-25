#include "Animal.hpp"

Animal::Animal() {
	std::cout << "[Animal] Constructor chamado, pelo método padrão.\n";
	this->type = "Animal";
}

Animal::~Animal() {
	std::cout << "[Animal] Destructor chamado.\n";
}

Animal::Animal( const Animal& other ) {
	std::cout << "[Animal] Constructor chamado, pelo método de cópia.\n";
	*this = other;
}

Animal&				Animal::operator=( const Animal& other ) {
	std::cout << "[Animal] Operador de atribuição chamado.\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void				Animal::makeSound() const {
	std::cout << "[" << this->type << "] Som de Animal Genérico.\n";
}

const std::string&	Animal::getType() const {
	return (this->type);
}
