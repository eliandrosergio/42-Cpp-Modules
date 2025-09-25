#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(); // Construtor
		~ScavTrap(); // Destructor
		ScavTrap( const std::string& name ); // Constructor com parâmetro
		ScavTrap( const ScavTrap& other ); // Constructor de cópia
		ScavTrap&	operator=( const ScavTrap& other ); // Operador de atribuíção de cópia

		void		attack( const std::string& target ); // Ft para ScavTrap atacar
		void		guardGate(); // Ft para ScavTrap entrar em guarda
};

#endif
