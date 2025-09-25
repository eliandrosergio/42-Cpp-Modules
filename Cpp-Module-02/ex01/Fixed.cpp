#include "Fixed.hpp"

// constructor padrão
Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

// destructor
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

// constructor com parâmetro inteiro
Fixed::Fixed( const int val ) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = (val * (1 << this->_fractional_bits));
}

// constructor parâmetro de ponto flutuante
Fixed::Fixed( const float val ) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = (roundf(val * (1 << _fractional_bits)));
}

// constructor de cópia
Fixed::Fixed( const Fixed& other ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// operador de atribuíção de cópia
Fixed& Fixed::operator=( const Fixed& other ) {
	std::cout << "Copy assignation operator called" << std::endl;
	this->_value = other._value;
	return (*this);
}

// getter do RawBits
int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

// setter do RawBits
void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

// function que retorna o value em int num
int Fixed::toInt( void ) const {
	return (this->_value / (1 << this->_fractional_bits));
}

// function que retorna o value em float num
float Fixed::toFloat( void ) const {
	return ((float)this->_value / (float)(1 << this->_fractional_bits));
}

// sobrecarga do operador de inserção («)
std::ostream& operator<<( std::ostream& out , const Fixed& fixed ) {
	out << fixed.toFloat();
	return (out);
}
