#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "[Dog] Constructor chamado, pelo método padrão.\n";
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "[Dog] Destructor chamado.\n";
}

Dog::Dog( const Dog& other ) : Animal() {
	std::cout << "[Dog] Constructor chamado, pelo método de cópia.\n";
	this->_brain = new Brain(*other._brain);
	*this = other;
}

Dog&	Dog::operator=( const Dog& other ) {
	std::cout << "[Dog] Operador de atribuição chamado.\n";
	if (this != &other) {
		this->Animal::operator=(other);
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "[" << this->type << "] Woof\n";
}

Brain*	Dog::getBrain( void ) const {
	return (this->_brain);
}
