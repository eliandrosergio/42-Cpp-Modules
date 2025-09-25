#include "Point.hpp"

Fixed	calcArea( const Point& a, const Point&b, const Point&c ) {
	Fixed	calc1( (a.getX() * (b.getY() - c.getY())) );
	Fixed	calc2( (b.getX() * (c.getY() - a.getY())) );
	Fixed	calc3( (c.getX() * (a.getY() - b.getY())) );
	Fixed	area( (Fixed( calc1 + calc2 + calc3 ) / Fixed( 2 )) );

	if (area < 0)
		area = area * Fixed( -1 );
	return (area);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed	areaTotal( calcArea(a, b, c) );
	Fixed	area1( calcArea(point, a, b) );
	Fixed	area2( calcArea(point, b, c) );
	Fixed	area3( calcArea(point, a, c) );
	bool	inside = false;

	if ((area1 == 0) || (area2 == 0) || (area3 == 0))
		inside = false;
	else if ((area1 + area2 + area3) == areaTotal)
		inside = true;
	return (inside);
}
