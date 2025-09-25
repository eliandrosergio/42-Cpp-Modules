#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "[Cat] Constructor chamado, pelo método padrão.\n";
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "[Cat] Destructor chamado.\n";
}

Cat::Cat( const Cat& other ) : Animal() {
	std::cout << "[Cat] Constructor chamado, pelo método de cópia.\n";
	this->_brain = new Brain(*other._brain);
	*this = other;
}

Cat&	Cat::operator=( const Cat& other ) {
	std::cout << "[Cat] Operador de atribuição chamado.\n";
	if (this != &other) {
		this->Animal::operator=(other);
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "[" << this->type << "] Miau\n";
}

Brain*	Cat::getBrain( void ) const {
	return (this->_brain);
}
