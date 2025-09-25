#include "ScalarConverter.hpp"

// =========================== base funcs ===========================

// Constroi um ScalarConverter.
ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter criado de forma padrão" << std::endl;
}

// Destroi um ScalarConverter.
ScalarConverter::~ScalarConverter() {
	std::cout << "ScalarConverter destruído" << std::endl;
}

// Cópia os atributos (inexistentes) de um ScalarConverter para outro.
ScalarConverter::ScalarConverter( const ScalarConverter& other ) {
	std::cout << "ScalarConverter criado por cópia" << std::endl;
	*this = other;
}

// Muda os atributos (inexistentes) de um ScalarConverter pelo de outro.
ScalarConverter	&ScalarConverter::operator=( const ScalarConverter& other ) {
	std::cout << "ScalarConverter cópiado" << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}

// ===========================  check funcs ===========================

// Verifica se um char é um digito
bool	ScalarConverter::isDigit( const char &c ) {
	std::string		digits = "0123456789";

	for (int i = 0; i < 10; i++) {
		if (c == digits[i])
			return (true);
	}
	return (false);
}

// Verifica se uma string é um char.
bool	ScalarConverter::isChar( const std::string &literal ) {
	if (literal.length() == 1 && !isDigit(literal[0]))
		return (true);
	return (false);
}

// Verifica se uma string é um int.
bool	ScalarConverter::isInt( const std::string &literal ) {
	std::stringstream	ss(literal);
	long int	i;
	char		c;
	
	if (ss >> i && !(ss >> c))
		return (true);
	return (false);
}

// Verifica se uma string é um float.
bool	ScalarConverter::isFloat( const std::string &literal ) {
	std::stringstream	ss(literal);
	float	f;
	char	c;
	char	c2;
	
	if ((ss >> f) && (ss >> c) && !(ss >> c2)) {
		if (c == 'f')
			return (true);
	}
	return (false);
}

// Verifica se uma string é um double.
bool	ScalarConverter::isDouble( const std::string &literal ) {
	std::stringstream	ss(literal);
	long double	d;
	char		c;
	
	if (ss >> d && !(ss >> c))
		return (true);
	return (false);
}

// Verifica se uma string é um pseudo-literal, seja ele float (pela ciência) ou double (por diversão).
bool	ScalarConverter::isPseudoLiteral( const std::string &literal, std::string &pseudoLiteral ) {
	std::string		pseudoLiteralDouble[] = { "-inf", "+inf", "nan" };
	std::string		pseudoLiteralFloat[] = { "-inff", "+inff", "nanf" };

	for (int i = 0; i < 3; i++) {
		if (literal == pseudoLiteralDouble[i] || literal == pseudoLiteralFloat[i]) {
			pseudoLiteral = pseudoLiteralDouble[i];
			return (true);
		}
	}
	return (false);
}

// =========================== print funcs ===========================

// Imprime um char quando ele for Exibível.
void	ScalarConverter::printChar( const std::string &literal ) {
	if (!(literal.length() == 1))
		std::cout << "char: '*'" << std::endl;
	else {
		char	c = static_cast<char>(literal[0]);

		if (c >= 32 && c <= 126 && !isDigit(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	return ;
}

// Imprime um lista de tipos apartir de um char.
void	ScalarConverter::printFromChar( const std::string &literal ) {
	printChar(literal);
	std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(literal[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(literal[0]) << ".0" << std::endl;
	return ;
}

// Imprime a lista de tipos para pseudo-literais.
void	ScalarConverter::printPseudoLiteral( const std::string &pseudoLiteral ) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << pseudoLiteral << "f" << std::endl;
	std::cout << "double: " << pseudoLiteral << std::endl;
	return ;
}

// Imprime a lista de tipos, modo final.
void	ScalarConverter::printFinalValue( const std::string &literal, const int &toI, const float &toF, const double &toD, const bool &isValidLiteral ) {
	if (isValidLiteral) {
		printChar(literal);
		std::cout << "int: ";
		if (toI < -MAXINT || toI > MAXINT)
			std::cout << "overflows" << std::endl;
		else
			std::cout << toI << std::endl;
		std::cout << "float: ";
		if (toF < -MAXFLOAT || toF > MAXFLOAT)
			std::cout << "overflows" << std::endl;
		else
			std::cout << toF << ( (toI == toF) ? ".0f" : "f") << std::endl;
		std::cout << "double: ";
		if (toD < -MAXDOUBLE || toD > MAXDOUBLE)
			std::cout << "overflows" << std::endl;
		else
			std::cout << toD << ( (toI == toD) ? ".0" : "") << std::endl;
	} else
		std::cout << "Mano, o que você digitou?! 😑️" << std::endl;
	return ;
}

// =========================== convert func ===========================

// O prato principal, função que converte a string literal para o seu tipo, e os demais tipos.
void	ScalarConverter::convert( const std::string &literal ) {
	int			toI = 0;
	double		toD = 0.0;
	float		toF = 0.0f;
	std::string	pseudoLiteral;
	bool		isValidLiteral = true;
	
	if (isPseudoLiteral(literal, pseudoLiteral))
		printPseudoLiteral(pseudoLiteral);
	else if (isChar(literal))
		printFromChar(literal);
	else {
		if (isInt(literal)) {
			toI = std::atoi(literal.c_str());
			toD = static_cast<double>(toI);
			toF = static_cast<float>(toI);
		} else if (isFloat(literal)) {
			toF = std::strtof(literal.c_str(), NULL);
			toD = static_cast<double>(toF);
			toI = static_cast<int>(toF);
		} else if (isDouble(literal)) {
			toD = std::strtod(literal.c_str(), NULL);
			toF = static_cast<float>(toD);
			toI = static_cast<int>(toD);
		} else
			isValidLiteral = false;
		printFinalValue(literal, toI, toF, toD, isValidLiteral);
	}
	return ;
}
