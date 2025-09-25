#include "Fixed.hpp"
#include <iostream>

int	main( void ) {
	std::cout << std::endl;
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}

	{
		std::cout << "\n\n====- TESTER DE COMPARAÇÃO -====\n";
		Fixed	a(2);
		Fixed	b(4);
		Fixed	c(4);

		std::cout << std::endl;
		if (a > b) std::cout << a << " é maior " << b << std::endl;
		else std::cout << b << " é maior " << a << std::endl;

		if (a < b) std::cout << a << " é menor " << b << std::endl;
		else std::cout << b << " é menor " << a << std::endl;

		if (a >= b) std::cout << a << " é maior ou igual " << b << std::endl;
		else std::cout << b << " é maior ou igual " << a << std::endl;
	
		if (b >= c) std::cout << b << " é maior ou igual " << c << std::endl;
		else std::cout << c << " é maior ou igual " << b << std::endl;

		if (a <= b) std::cout << a << " é menor ou igual " << b << std::endl;
		else std::cout << b << " é menor ou igual " << a << std::endl;

		if (b <= c) std::cout << b << " é menor ou igual " << c << std::endl;
		else std::cout << c << " é menor ou igual " << b << std::endl;

		if (b == c) std::cout << b << " e " << c << " são iguais\n";
		else if (b != c) std::cout << b << " e " << c << " são diferentes\n";

		if (a == b) std::cout << a << " e " << b << " são iguais\n";
		else if (a != b) std::cout << a << " e " << b << " são diferentes\n";
		std::cout << std::endl;
	}

	{
		std::cout << "\n\n====- TESTER DE ARITMÉTICA -====\n";
		Fixed	a(20);
		Fixed	b(2);
		Fixed	result;

		std::cout << std::endl;
		result = (a + b);
		std::cout << "\n > " << a << " + " << b << " = " << result << "\n\n";
		result = (a - b);
		std::cout << "\n > " << a << " - " << b << " = " << result << "\n\n";
		result = (a * b);
		std::cout << "\n > " << a << " * " << b << " = " << result << "\n\n";
		result = (a / b);
		std::cout << "\n > " << a << " / " << b << " = " << result << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "\n\n====- TESTER DE PRÉ/PÓS INCREMENTO/DECREMENTO -====\n";
		Fixed	num(42);
		Fixed	backup(num);
		Fixed	depois;
		Fixed	antes;

		std::cout << std::endl;
		antes = num;
		depois = ++num;
		std::cout << "\n > antes do pré-incremeto: " << antes << " \n > depois do pré-incremento: " << depois << "\n\n";

		num = backup;
		antes = num++;
		std::cout << "\n > antes do pós-incremeto: " << antes << " \n > depois do pós-incremento: " << num << "\n\n";

		num = backup;
		antes = num;
		depois = --num;
		std::cout << "\n > antes do pré-decremeto: " << antes << " \n > depois do pré-decremento: " << depois << "\n\n";

		num = backup;
		antes = num--;
		std::cout << "\n > antes do pós-decremeto: " << antes << " \n > depois do pós-decremento: " << num << "\n\n";
		std::cout << std::endl;
	}

	{
		std::cout << "\n\n====- TESTER DE MIN/MAX E CONST MIN/MAX -====\n";
		Fixed		num1(2);
		Fixed		num2(4);
		const Fixed	num3(8);
		const Fixed	num4(10);

		Fixed			min(Fixed::min(num1, num2));
		Fixed			max(Fixed::max(num1, num2));
		const Fixed		minConst(Fixed::min(num3, num4));
		const Fixed		maxConst(Fixed::max(num3, num4));

		std::cout << "\n > min: " << min << "\n > max: " << max << "\n > const min: " << minConst << "\n > const max: " << maxConst << std::endl;
		std::cout << std::endl;
	}

	std::cout << std::endl;
	return (0);
}
