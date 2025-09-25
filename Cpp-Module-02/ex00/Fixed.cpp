#include "Fixed.hpp"

// constructor padrão
Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

// destructor
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

// constructor de cópia
Fixed::Fixed( const Fixed& other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// operador de atribuíção de cópia
Fixed& Fixed::operator=( const Fixed& other ) {
	std::cout << "Copy assignation operator called" << std::endl;
	this->value = other.value;
	return (*this);
}

// getter do RawBits
int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

// setter do RawBits
void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}
