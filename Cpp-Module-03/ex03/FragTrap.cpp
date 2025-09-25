#include "FragTrap.hpp"

// Destructor
FragTrap::~FragTrap() {
	std::cout << "[FragTrap] " << this->_name << " saiu da luta!\n";
}

// Construtor
FragTrap::FragTrap() : ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "[FragTrap] " << this->_name << " entrou na luta, de modo padrão!\n";
}

// Constructor com parâmetro
FragTrap::FragTrap( const std::string& name ) : ClapTrap(name) {
	std::cout << "[FragTrap] " << name << " entrou na luta, com parâmetro!\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

// Constructor de cópia
FragTrap::FragTrap( const FragTrap& other ) : ClapTrap(other._name) {
	std::cout << "[FragTrap] " << other._name << " entrou na luta, através de cópia!\n";
	*this = other;
}

// Operador de atribuíção de cópia
FragTrap&	FragTrap::operator=( const FragTrap& other ) {
	std::cout << "[FragTrap] Operador de atribuíção chamado!\n";
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

// Ft para solicitar um High-Fives
void		FragTrap::highFivesGuys( void ) {
	std::cout << "[FragTrap] " << this->_name << " esta pedindo um high-fives a você <3!!\n";
}
