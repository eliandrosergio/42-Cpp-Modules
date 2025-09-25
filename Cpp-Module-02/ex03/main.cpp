#include "Point.hpp"

void	myTester( const Point& a, const Point& b, const Point& c, const Point& p ) {
	if (bsp(a, b, c, p))
		std::cout << "> O ponto esta DENTRO do triângulo." << std::endl;
	else
		std::cout << "> O ponto esta FORA do triângulo." << std::endl;
	return ;
}

void	myDataCollector( void ) {
	float	x, y; // Float(s) para as posições x e y

	std::cout << "\nDigite as coordenadas para o ponto A (x y): ";
	std::cin >> x >> y;
	Point	a(x, y); // Vértice A do triângulo

	std::cout << "Digite as coordenadas para o ponto B (x y): ";
	std::cin >> x >> y;
	Point	b(x, y); // Vértice B do triângulo

	std::cout << "Digite as coordenadas para o ponto C (x y): ";
	std::cin >> x >> y;
	Point	c(x, y); // Vértice C do triângulo

	std::cout << "Digite as coordenadas para o ponto P (x y): ";
	std::cin >> x >> y;
	Point	p(x, y); // Ponto a ser verificado

	// Testando o ponto p no triângulo abc
	myTester( a, b, c, p );
	return ;
}

void	myTests( void ) {
	// Tester 01
	std::cout << "\nTeste 01: Triângulo A(1.0, 1.0), B(5.0, 1.0), C(3.0, 4.0), com P(3.0, 2.0)\n";
	myTester( Point(1.0f, 1.0f), Point(5.0f, 1.0f), Point(3.0f, 4.0f), Point(3.0f, 2.0f) );

	// Tester 02
	std::cout << "\nTeste 02: Triângulo A(2.0, 7.0), B(5.0, 10.0), C(8.0, 4.0), com P(6.0, 6.0)\n";
	myTester( Point(2.0f, 7.0f), Point(5.0f, 10.0f), Point(8.0f, 4.0f), Point(6.0f, 6.0f) );

	// Tester 03
	std::cout << "\nTeste 03: Triângulo A(1.0, 4.0), B(4.0, 2.0), C(8.0, 1.0), com P(2.0, 1.0)\n";
	myTester( Point(1.0f, 4.0f), Point(4.0f, 2.0f), Point(8.0f, 1.0f), Point(2.0f, 1.0f) );

	// Tester 04
	std::cout << "\nTeste 04: Triângulo A(-1.0, -4.0), B(-3.0, -1.0), C(-6.0, -4.0), com P(-3.0, -3.0)\n";
	myTester( Point(-1.0f, -4.0f), Point(-3.0f, -1.0f), Point(-6.0f, -4.0f), Point(-3.0f, -3.0f) );

	// Tester 05
	std::cout << "\nTeste 05: Triângulo A(-2.0, -5.0), B(-5.0, -2.0), C(-4.0, -4.0), com P(-3.0, -4.0)\n";
	myTester( Point(-2.0f, -5.0f), Point(-5.0f, -2.0f), Point(-4.0f, -4.0f), Point(-3.0f, -4.0f) );

	// Tester 06
	std::cout << "\nTeste 06: Triângulo A(-2.0, -5.0), B(-5.0, -2.0), C(-4.0, -4.0), com P(-2.0, -5.0)\n";
	myTester( Point(-2.0f, -5.0f), Point(-5.0f, -2.0f), Point(-4.0f, -4.0f), Point(-2.0f, -5.0f) );

	return ;
}

int		main( void ) {
	// Executando meus tests pessoais	
	myTests();

	// While para tests na avaliação
	while (true) {
		std::string	res;
		std::cout << "\n\nDeseja realizar seu proprio teste (s/n)? > ";
		std::cin >> res;

		if (res != "s" && res != "S")
			break ;
		myDataCollector();
	}

	// Despedindo-se do usuário
	std::cout << "\n\nAdeus amigo!\n";
	return 0;
}
