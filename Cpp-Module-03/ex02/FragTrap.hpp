#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(); // Construtor
		~FragTrap(); // Destructor
		FragTrap( const std::string& name ); // Constructor com parâmetro
		FragTrap( const FragTrap& other ); // Constructor de cópia
		FragTrap&	operator=( const FragTrap& other ); // Operador de atribuíção de cópia

		void		highFivesGuys( void ); // Ft para solicitar um High-Fives
};

#endif
