#include "Cure.hpp"
#include "colors.hpp"

Cure::~Cure() {
	std::cout << "Máteria " << GREN << this->_type << WHIT << " destruída!\n";
}

Cure::Cure() : AMateria("cure") {
	std::cout << "Máteria " << GREN << this->_type << WHIT << " criada de forma " << YELW << "padrão" << WHIT << "!\n";
}

Cure::Cure( const Cure& other ) : AMateria(other._type) {
	std::cout << "Máteria " << GREN << this->_type << WHIT << " criada por " << YELW << "cópia" << WHIT << "!\n";
}

Cure&		Cure::operator=( const Cure& other ) {
	if (this != &other)
		this->AMateria::operator=(other);
	return (*this);
}

AMateria*	Cure::clone() const {
	AMateria*	clone = new Cure();
	return (clone);
}

void		Cure::use( ICharacter& target ) {
	std::cout << "* " << GREN << "heals " << YELW << target.getName()<< "’s" << WHIT << " wounds *\n";
}
