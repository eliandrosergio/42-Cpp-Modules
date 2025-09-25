#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include <iostream>
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		int				_size;
		AMateria**		_sources;

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource( const MateriaSource& other );
		MateriaSource&	operator=( const MateriaSource& other );

		void			learnMateria( AMateria* materia );
		AMateria*		createMateria( std::string const & type );
};

#endif
