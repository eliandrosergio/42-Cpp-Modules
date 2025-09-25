#include "ClapTrap.hpp"

// Destructor
ClapTrap::~ClapTrap() {
	std::cout << "[ClapTrap] " << this->_name << " saiu da luta!\n";
}

// Construtor
ClapTrap::ClapTrap() {
	this->_name = "Unknown";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "[ClapTrap] " << this->_name << " entrou na luta, de modo padrão!\n";
}

// Constructor com parâmetro
ClapTrap::ClapTrap( const std::string& name ) {
	std::cout << "[ClapTrap] " << name << " entrou na luta, com parâmetro!\n";
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

// Constructor de cópia
ClapTrap::ClapTrap( const ClapTrap& other ) {
	std::cout << "[ClapTrap] " << other._name << " entrou na luta, através de cópia!\n";
	*this = other;
}

// Operador de atribuíção de cópia
ClapTrap&	ClapTrap::operator=( const ClapTrap& other ) {
	std::cout << "[ClapTrap] Operador de atribuíção chamado!\n";
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	return (*this);
}

// Ft para ClapTrap atacar
void		ClapTrap::attack( const std::string& target ) {
	if (this->_hitPoints == 0)
		std::cout << "[ClapTrap] " << this->_name << " esta morto, e não pode atacar " << target << "!\n";
	else if (this->_energyPoints > 0) {
		std::cout << "[ClapTrap] " << this->_name << " ataca " << target << ", causando " << this->_attackDamage << " pontos de dano!\n";
		this->_energyPoints -= 1;
	} else
		std::cout << "[ClapTrap] " << this->_name << " não tem pontos de energia suficientes para atacar " << target << "!\n";
}

// Ft para ClapTrap receber dano
void		ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_hitPoints == 0)
		std::cout << "[ClapTrap] " << this->_name << " já esta morto!\n";
	else {
		int		newHit = this->_hitPoints - amount;
		if (newHit < 0)
			newHit = 0;
		std::cout << "[ClapTrap] " << this->_name << " recebe " << amount << " pontos de dano, baixando sua vida de " << this->_hitPoints << " para " << newHit << "!\n";
		this->_hitPoints = newHit;
		if (this->_hitPoints == 0)
			std::cout << "[ClapTrap] " << this->_name << " acaba por morrer!\n";
	}
}

// Ft para reparar o ClapTrap
void		ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_hitPoints == 0)
		std::cout << "[ClapTrap] " << this->_name << " esta morto, e não pode reparar-se!\n";
	else if (this->_energyPoints > 0) {
		int		newHit = this->_hitPoints + amount;
		std::cout << "[ClapTrap] " << this->_name << " repara sua vida de " << this->_hitPoints << " para " << newHit << "!\n";
		this->_hitPoints = newHit;
		this->_energyPoints -= 1;
	} else
		std::cout << "[ClapTrap] " << this->_name << " não tem pontos de energia suficientes para reparar-se!\n";
}
