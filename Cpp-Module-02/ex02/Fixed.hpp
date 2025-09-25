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

		bool operator>( const Fixed& other ); // opr de cmp maior que
		bool operator<( const Fixed& other ); // opr de cmp menor que
		bool operator>=( const Fixed& other ); // opr de cmp maior que
		bool operator<=( const Fixed& other ); // opr de cmp menor que
		bool operator==( const Fixed& other ); // opr de cmp igual que
		bool operator!=( const Fixed& other ); // opr de cmp diferente que

		Fixed operator+( const Fixed& other ); // opr art soma
		Fixed operator-( const Fixed& other ); // opr art subtração
		Fixed operator*( const Fixed& other ); // opr art multiplicação
		Fixed operator/( const Fixed& other ); // opr art divisão

		Fixed& operator++( void ); // opr de pré-incremento
		Fixed& operator--( void ); // opr de pré-decremento
		Fixed operator++( int ); // opr de pós-incremento
		Fixed operator--( int ); // opr de pós-decremento

		int getRawBits( void ) const; // getter do RawBits
		void setRawBits( int const raw ); // setter do RawBits

		int toInt( void ) const; // ft que retorna o value em int num
		float toFloat( void ) const; // ft que retorna o value em float num

		static Fixed& min(Fixed& num1, Fixed& num2); // ft min ref
		static Fixed& max(Fixed& num1, Fixed& num2); // ft max ref
		static const Fixed& min(const Fixed& num1, const Fixed& num2); // ft min const ref
		static const Fixed& max(const Fixed& num1, const Fixed& num2); // ft max const ref
};

// sobrecarga do operador de inserção («)
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
