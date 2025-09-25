#include "ScavTrap.hpp"

// Destructor
ScavTrap::~ScavTrap() {
	std::cout << "[ScavTrap] " << this->_name << " saiu da luta!\n";
}

// Construtor
ScavTrap::ScavTrap() : ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "[ScavTrap] " << this->_name << " entrou na luta, de modo padrão!\n";
}

// Constructor com parâmetro
ScavTrap::ScavTrap( const std::string& name ) : ClapTrap(name) {
	std::cout << "[ScavTrap] " << name << " entrou na luta, com parâmetro!\n";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

// Constructor de cópia
ScavTrap::ScavTrap( const ScavTrap& other ) : ClapTrap(other._name) {
	std::cout << "[ScavTrap] " << other._name << " entrou na luta, através de cópia!\n";
	*this = other;
}

// Operador de atribuíção de cópia
ScavTrap&	ScavTrap::operator=( const ScavTrap& other ) {
	std::cout << "[ScavTrap] Operador de atribuíção chamado!\n";
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

// Ft para ScavTrap atacar
void		ScavTrap::attack( const std::string& target ) {
	if (this->_hitPoints == 0)
		std::cout << "[ScavTrap] " << this->_name << " esta morto, e não pode atacar " << target << "!\n";
	else if (this->_energyPoints > 0) {
		std::cout << "[ScavTrap] " << this->_name << " ataca " << target << ", causando " << this->_attackDamage << " pontos de dano!\n";
		this->_energyPoints -= 1;
	} else
		std::cout << "[ScavTrap] " << this->_name << " não tem pontos de energia suficientes para atacar " << target << "!\n";
}

// Ft para ScavTrap entrar em guarda
void		ScavTrap::guardGate() {
	std::cout << "[ScavTrap] " << this->_name << " esta agora em modo Gate keeper!\n";
}
