#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _value;
		static const int _fractional_bits = 8;

	public:
		Fixed(); // constructor padrão
		~Fixed(); // destructor

		Fixed( const int val ); // constructor com parâmetro inteiro
		Fixed( const float val ); // constructor parâmetro de ponto flutuante
		Fixed( const Fixed& other ); // constructor de cópia

		Fixed& operator=( const Fixed& other ); // operador de atribuíção de cópia

		int getRawBits( void ) const; // getter do RawBits
		void setRawBits( int const raw ); // setter do RawBits

		int toInt( void ) const; // function que retorna o value em int num
		float toFloat( void ) const; // function que retorna o value em float num
};

// sobrecarga do operador de inserção («)
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
