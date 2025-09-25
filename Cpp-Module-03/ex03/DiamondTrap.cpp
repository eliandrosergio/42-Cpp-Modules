#include "DiamondTrap.hpp"

// Destructor
DiamondTrap::~DiamondTrap() {
	std::cout << "[DiamondTrap] " << this->_name << " saiu da luta!\n";
}

// Construtor
DiamondTrap::DiamondTrap() : ClapTrap("Unknown_clap_name"), FragTrap(), ScavTrap() {
	this->_name = "Unknown";
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
	std::cout << "[DiamondTrap] " << this->_name << " entrou na luta, de modo padrão!\n";
}

// Constructor com parâmetro
DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap() {
	std::cout << "[DiamondTrap] " << name << " entrou na luta, com parâmetro!\n";
	this->_name = name;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
}

// Constructor de cópia
DiamondTrap::DiamondTrap( const DiamondTrap& other ) : ClapTrap(other.ClapTrap::_name), FragTrap(), ScavTrap() {
	std::cout << "[DiamondTrap] " << other._name << " entrou na luta, através de cópia!\n";
	*this = other;
}

// Operador de atribuíção de cópia
DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& other ) {
	std::cout << "Operador de atribuíção chamado!\n";
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	this->ClapTrap::_name = other.ClapTrap::_name;
	return (*this);
}

// Ft para DiamondTrap atacar usando ScavTrap
void			DiamondTrap::attack( const std::string& target ) {
	this->ScavTrap::attack( target );
}

// Ft para DiamondTrap ter uma crise existencial
void			DiamondTrap::whoAmI() {
	std::cout << "\n[DiamondTrap] " << this->_name << ": Na tribo DiamondTrap eu sou \"" << this->_name;
	std::cout << "\".\n[DiamondTrap] " << this->_name << ": Na tribo ClapTrap eu sou \"" << this->ClapTrap::_name;
	std::cout << "\".\n[DiamondTrap] " << this->_name << ": Quem Sou Eu?!\n\n";
}
