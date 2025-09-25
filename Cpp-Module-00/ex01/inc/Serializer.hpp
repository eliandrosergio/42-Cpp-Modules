#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "data.hpp"
#include <cstdlib>
#include <stdint.h>

class	Serializer
{
	private:
		Serializer();
		virtual ~Serializer() = 0;
		Serializer( const Serializer& other );
		Serializer	&operator=( const Serializer& other );

	public:
		static uintptr_t	serialize( Data* ptr );
		static Data*		deserialize( uintptr_t raw );
};

#endif
