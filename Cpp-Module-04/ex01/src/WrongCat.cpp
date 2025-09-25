#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "[WrongCat] Constructor chamado, pelo método padrão.\n";
}

WrongCat::~WrongCat() {
	std::cout << "[WrongCat] Destructor chamado.\n";
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal() {
	std::cout << "[WrongCat] Constructor chamado, pelo método de cópia.\n";
	*this = other;
}

WrongCat&	WrongCat::operator=( const WrongCat& other ) {
	std::cout << "[WrongCat] Operador de atribuição chamado.\n";
	if (this != &other)
		this->WrongAnimal::operator=(other);
	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "[" << this->type << "] Miau\n";
}
