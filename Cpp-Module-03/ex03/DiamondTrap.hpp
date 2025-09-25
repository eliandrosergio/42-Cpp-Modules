#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string		_name;

	public:
		DiamondTrap(); // Construtor
		~DiamondTrap(); // Destructor
		DiamondTrap( const std::string& name ); // Constructor com parâmetro
		DiamondTrap( const DiamondTrap& other ); // Constructor de cópia
		DiamondTrap&	operator=( const DiamondTrap& other ); // Operador de atribuíção de cópia

		void			attack( const std::string& target ); // Ft para DiamondTrap atacar usando ScavTrap
		void			whoAmI(); // Ft para DiamondTrap ter uma crise existencial
};

#endif
