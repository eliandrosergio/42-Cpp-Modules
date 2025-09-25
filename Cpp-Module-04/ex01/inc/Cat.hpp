#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

#include "Brain.hpp"
#include "Animal.hpp"

class	Cat : public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat();
		~Cat();
		Cat( const Cat& other );
		Cat&	operator=( const Cat& other );

		void	makeSound() const ;
		Brain*	getBrain( void ) const ;
};

#endif
