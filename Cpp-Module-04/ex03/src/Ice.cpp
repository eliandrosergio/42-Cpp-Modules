#include "Ice.hpp"
#include "colors.hpp"

Ice::~Ice() {
	std::cout << "Máteria " << CYAN << this->_type << WHIT << " destruída!\n";
}

Ice::Ice() : AMateria("ice") {
	std::cout << "Máteria " << CYAN << this->_type << WHIT << " criada de forma " << YELW << "padrão" << WHIT << "!\n";
}

Ice::Ice( const Ice& other ) : AMateria(other._type) {
	std::cout << "Máteria " << CYAN << this->_type << WHIT << " criada por " << YELW << "cópia" << WHIT << "!\n";
}

Ice&		Ice::operator=( const Ice& other ) {
	if (this != &other)
		this->AMateria::operator=(other);
	return (*this);
}

AMateria*	Ice::clone() const {
	AMateria*	clone = new Ice();
	return (clone);
}

void		Ice::use( ICharacter& target ) {
	std::cout << "* shoots an " << CYAN << "ice" << WHIT << " bolt at " << YELW << target.getName() << WHIT<< " *\n";
}
