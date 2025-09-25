#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[Brain] Constructor chamado, pelo método padrão.\n";
}

Brain::~Brain() {
	std::cout << "[Brain] Destructor chamado.\n";
}

Brain::Brain( const Brain& other ) {
	std::cout << "[Brain] Constructor chamado, pelo método de cópia.\n";
	*this = other;
}

Brain&				Brain::operator=( const Brain& other ) {
	std::cout << "[Brain] Operador de atribuição chamado.\n";
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}


const std::string&	Brain::getIdea( const int& id ) const {
	return (this->ideas[id]);
}

void				Brain::setIdea( const int& id, const std::string& idea ) {
	this->ideas[id] = idea;
}
