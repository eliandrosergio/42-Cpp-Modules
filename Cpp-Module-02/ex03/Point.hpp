#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		const Fixed x;
		const Fixed y;

	public:
		Point(); // construtor padrão
		~Point(); // destructor

		Point ( const Point& other ); // construtor de cópia
		Point( const float x, const float y ); // construtor com parâmetros
		Point& operator=( Point& other ); // operador de atribuíção de cópia

		Fixed getX( void ) const; // getter do valor do parâmentro X
		Fixed getY( void ) const; // getter do valor do parâmentro Y
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
