#include "Fixed.hpp"

// ******************** Constructor(s) e Destructor ********************
// constructor padrão
Fixed::Fixed() {
	this->_value = 0;
}

// destructor
Fixed::~Fixed() {}

// constructor com parâmetro inteiro
Fixed::Fixed( const int val ) {
	this->_value = (val * (1 << this->_fractional_bits));
}

// constructor parâmetro de ponto flutuante
Fixed::Fixed( const float val ) {
	this->_value = (roundf(val * (1 << _fractional_bits)));
}

// constructor de cópia
Fixed::Fixed( const Fixed& other ) {
	*this = other;
}


// ******************** Funções Públicas ********************
// getter do RawBits
int Fixed::getRawBits( void ) const {
	return (this->_value);
}

// setter do RawBits
void Fixed::setRawBits( int const raw ) {
	this->_value = raw;
}

// ft que retorna o value em int num
int Fixed::toInt( void ) const {
	return (this->_value / (1 << this->_fractional_bits));
}

// ft que retorna o value em float num
float Fixed::toFloat( void ) const {
	return ((float)this->_value / (float)(1 << this->_fractional_bits));
}


// ******************** Operadores Diversos ********************
// operador de atribuíção de cópia
Fixed& Fixed::operator=( const Fixed& other ) {
	this->_value = other._value;
	return (*this);
}

// sobrecarga do operador de inserção («)
std::ostream& operator<<( std::ostream& out , const Fixed& fixed ) {
	out << fixed.toFloat();
	return (out);
}


// ******************** Operadores de Comparação ********************
// opr de cmp maior que
bool Fixed::operator>( const Fixed& other ) {
	return (this->toFloat() > other.toFloat());
}

// opr de cmp menor que
bool Fixed::operator<( const Fixed& other ) {
	return (this->toFloat() < other.toFloat());
}

// opr de cmp maior que
bool Fixed::operator>=( const Fixed& other ) {
	return (this->toFloat() >= other.toFloat());
}

// opr de cmp menor que
bool Fixed::operator<=( const Fixed& other ) {
	return (this->toFloat() <= other.toFloat());
}

// opr de cmp igual que
bool Fixed::operator==( const Fixed& other ) {
	return (this->toFloat() == other.toFloat());
}

// opr de cmp diferente que
bool Fixed::operator!=( const Fixed& other ) {
	return (this->toFloat() != other.toFloat());
}


// ******************** Operadores Aritmético ********************
// opr art soma
Fixed Fixed::operator+( const Fixed& other ) {
	float value = this->toFloat() + other.toFloat();
	Fixed temp(value);
	return (temp);
}

// opr art subtração
Fixed Fixed::operator-( const Fixed& other ) {
	float value = this->toFloat() - other.toFloat();
	Fixed temp(value);
	return (temp);
}

// opr art multiplicação
Fixed Fixed::operator*( const Fixed& other ) {
	float value = this->toFloat() * other.toFloat();
	Fixed temp(value);
	return (temp);
}

// opr art divisão
Fixed Fixed::operator/( const Fixed& other ) {
	float value = this->toFloat() / other.toFloat();
	Fixed temp(value);
	return (temp);
}


// ************ Operadores de Pré/Pós Incremento/Decremento ************
// opr de pré-incremento
Fixed& Fixed::operator++( void ) {
	this->_value++;
	return (*this);
}

// opr de pré-decremento
Fixed& Fixed::operator--( void ) {
	this->_value--;
	return (*this);
}

// opr de pós-incremento
Fixed Fixed::operator++( int ) {
	Fixed temp(*this);
	this->_value++;
	return (temp);
}

// opr de pós-decremento
Fixed Fixed::operator--( int ) {
	Fixed temp(*this);
	this->_value--;
	return (temp);
}


// ******************** Funções Staticas ********************
// ft min ref
Fixed& Fixed::min(Fixed& num1, Fixed& num2) {
	if (num1._value > num2._value)
		return (num2);
	return (num1);
}

// ft max ref
Fixed& Fixed::max(Fixed& num1, Fixed& num2) {
	if (num1._value > num2._value)
		return (num1);
	return (num2);
}

// ft min const ref
const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2) {
	if (num1._value > num2._value)
		return (num2);
	return (num1);
}

// ft max const ref
const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2) {
	if (num1._value > num2._value)
		return (num1);
	return (num2);
}
