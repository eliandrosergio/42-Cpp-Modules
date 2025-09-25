#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <limits> // para limites dos tipos de dados
#include <string> // para lidar com std::strings
#include <sstream> // para o stringstream
#include <cstdlib> // para o atoi, o strtof e o strtod
#include <iostream> // para lidar com streams de texto

#define MAXINT std::numeric_limits<int>::max()
#define MAXFLOAT std::numeric_limits<float>::max()
#define MAXDOUBLE std::numeric_limits<double>::max()

class	ScalarConverter {
	private:
		// base funcs
		ScalarConverter();
		virtual ~ScalarConverter() = 0;
		ScalarConverter( const ScalarConverter& other );
		ScalarConverter	&operator=( const ScalarConverter& other );

		// check funcs
		static bool	isDigit( const char &c );
		static bool	isChar( const std::string &literal );
		static bool	isInt( const std::string &literal );
		static bool	isFloat( const std::string &literal );
		static bool	isDouble( const std::string &literal );
		static bool	isPseudoLiteral( const std::string &literal, std::string &pseudoLiteralID );

		// print funcs
		static void	printChar( const std::string &literal );
		static void	printFromChar( const std::string &literal );
		static void	printPseudoLiteral( const std::string &pseudoLiteralId );
		static void	printFinalValue( const std::string &literal, const int &toI, const float &toF, const double &toD, const bool &isValidLiteral );

	public:
		// convert func
		static void	convert( const std::string &literal );
};

#endif
