#include "Point.hpp"

// ******************** Constructor(s) e Destructor ********************
// destructor
Point::~Point() {}

// construtor padrão
Point::Point() : x(0), y(0) {}

// construtor com parâmetros
Point::Point( const float x, const float y ) : x(x), y(y) {}

// construtor de cópia
Point::Point ( const Point& other ) : x(other.x), y(other.y) {}


// ******************** Operadores Diversos ********************
// operador de atribuíção de cópia
Point&	Point::operator=( Point& other ) {
	return (other);
}


// ******************** Funções Públicas ********************
// getter do valor do parâmentro X
Fixed	Point::getX( void ) const {
	return (this->x);
}

// getter do valor do parâmentro Y
Fixed	Point::getY( void ) const {
	return (this->y);
}
