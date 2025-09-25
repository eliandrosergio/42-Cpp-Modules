#include "Serializer.hpp"

// =========================== base funcs ===========================

// Constroi um ScalarConverter.
Serializer::Serializer() {
	std::cout << "Serializer criado de forma padrão." << std::endl;
}

// Destroi um ScalarConverter.
Serializer::~Serializer() {
	std::cout << "Serializer destruído." << std::endl;
}

// Cópia os atributos (inexistentes) de um ScalarConverter para outro.
Serializer::Serializer( const Serializer& other ) {
	std::cout << "ScalarConverter criado por cópia" << std::endl;
	*this = other;
}

// Muda os atributos (inexistentes) de um ScalarConverter pelo de outro.
Serializer	&Serializer::operator=( const Serializer& other ) {
	std::cout << "ScalarConverter cópiado" << std::endl;
	if (this == &other)
		return (*this);
	return (*this);
}

// =========================== subject funcs ===========================

uintptr_t	Serializer::serialize( Data* ptr ) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Serializer::deserialize( uintptr_t raw ) {
	return (reinterpret_cast<Data*>(raw));
}
