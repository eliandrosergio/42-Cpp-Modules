#include "MateriaSource.hpp"
#include "colors.hpp"

MateriaSource::~MateriaSource() {
	std::cout << CYAN << "MateriaSource" << WHIT << " destruída!\n";
	for (int i = 0; i < 4; i++)
		delete this->_sources[i];
	delete[] this->_sources;
}

MateriaSource::MateriaSource() : IMateriaSource() {
	std::cout << CYAN << "MateriaSource" << WHIT << " criada de forma " << YELW << "padrão" << WHIT << "!\n";
	this->_size = 0;
	this->_sources = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->_sources[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& other ) : IMateriaSource() {
	std::cout << CYAN << "MateriaSource" << WHIT << " criada através de " << YELW << "cópia" << WHIT << "!\n";
	this->_sources = new AMateria*[4];
	*this = other;
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& other ) {
	if (this != &other) {
		this->_size = other._size;
		for (int i = 0; i < 4; i++) {
			delete this->_sources[i];
			this->_sources[i] = NULL;
			if (other._sources[i] != NULL)
				this->_sources[i] = other._sources[i]->clone();
		}
	}
	return (*this);
}

void			MateriaSource::learnMateria( AMateria* materia ) {
	if (materia != NULL && this->_size < 4) {
		this->_sources[this->_size] = materia->clone();
		this->_size++;
	}
	return ;
}

AMateria*		MateriaSource::createMateria( std::string const & type ) {
	if (!type.empty()) {
		for (int idx = 0; idx < this->_size; idx++) {
			if (this->_sources[idx]->getType() == type)
				return (this->_sources[idx]->clone());
		}
	}
	return (0);
}
