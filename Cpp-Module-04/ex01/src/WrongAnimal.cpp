#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "[WrongAnimal] Constructor chamado, pelo método padrão.\n";
	this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[WrongAnimal] Destructor chamado.\n";
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {
	std::cout << "[WrongAnimal] Constructor chamado, pelo método de cópia.\n";
	*this = other;
}

WrongAnimal&				WrongAnimal::operator=( const WrongAnimal& other ) {
	std::cout << "[WrongAnimal] Operador de atribuição chamado.\n";
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void				WrongAnimal::makeSound() const {
	std::cout << "[" << this->type << "] Som de WrongAnimal Genérico.\n";
}

const std::string&	WrongAnimal::getType() const {
	return (this->type);
}
