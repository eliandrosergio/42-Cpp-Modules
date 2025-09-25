#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>

#include "Brain.hpp"
#include "Animal.hpp"

class	Dog : public Animal
{
	private:
		Brain*	_brain;

	public:
		Dog();
		~Dog();
		Dog( const Dog& other );
		Dog&	operator=( const Dog& other );

		void	makeSound() const ;
		Brain*	getBrain( void ) const ;
};

#endif
