#include "AMateria.hpp"
#include "colors.hpp"

AMateria::~AMateria() {
	std::cout << CYAN << "AMateria" << WHIT << " destruída!\n";
}

AMateria::AMateria() : _type("AMateria") {
	std::cout << CYAN << "AMateria" << WHIT << " criada de forma " << YELW << "padrão" << WHIT << "!\n";
}

AMateria::AMateria( std::string const & type ) : _type(type) {
	std::cout << CYAN << "AMateria" << WHIT << " criada com " << YELW << "parâmetro" << WHIT << "!\n";
}

AMateria::AMateria( const AMateria& other ) {
	std::cout << CYAN << "AMateria" << WHIT << " criada através de " << YELW << "cópia" << WHIT << "!\n";
	*this = other;
}

AMateria&			AMateria::operator=( const AMateria& other ) {
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

std::string const &	AMateria::getType() const {
	return (this->_type);
}

void				AMateria::use( ICharacter& target ) {
	if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "’s wounds *\n";
	else if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at "<< target.getName() << " *\n";
	else
		std::cout << "* uses " << this->_type << " matter in " << target.getName() << " *\n";
}
