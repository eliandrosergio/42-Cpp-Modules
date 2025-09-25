#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap(); // Construtor
		~ClapTrap(); // Destructor
		ClapTrap( const std::string& name ); // Constructor com parâmetro
		ClapTrap( const ClapTrap& other ); // Constructor de cópia
		ClapTrap&	operator=( const ClapTrap& other ); // Operador de atribuíção de cópia

		void		attack( const std::string& target ); // Ft para ClapTrap atacar
		void		takeDamage( unsigned int amount ); // Ft para ClapTrap receber dano
		void		beRepaired( unsigned int amount ); // Ft para reparar o ClapTrap
};

#endif
