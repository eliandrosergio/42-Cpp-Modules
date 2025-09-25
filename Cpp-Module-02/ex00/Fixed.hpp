#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int value;
		static const int fractional_bits = 8;

	public:
		Fixed(); // constructor padrão
		~Fixed(); // destructor

		Fixed( const Fixed& other ); // constructor de cópia
		Fixed& operator=( const Fixed& other ); // operador de atribuíção de cópia

		int getRawBits( void ) const; // getter do RawBits
		void setRawBits( int const raw ); // setter do RawBits
};

#endif
