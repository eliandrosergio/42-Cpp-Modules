#include "Character.hpp"
#include "colors.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

// ************************************ Init Static Private Var ************************************

int			Character::_unequipSize = 0;
int			Character::_unequipSlots = 5;
int			Character::_counterInstance = 0;
AMateria** 	Character::_unequipInventory = NULL;


// ************************************ Character Functions ************************************

Character::Character() : ICharacter() {
	this->_counterInstance++;
	this->_name = "Fulano";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	if (this->_counterInstance == 1) {
		this->_unequipInventory = new AMateria*[this->_unequipSlots];
		for (int i = 0; i < this->_unequipSlots; i++)
			this->_unequipInventory[i] = NULL;
	}
	std::cout << "Player " << CYAN << this->_name << WHIT << " entrou no " << GREN << "jogo " << WHIT << "de forma " << YELW << "padrão!\n" << WHIT;
}

Character::Character( const std::string& name ) : ICharacter() {
	this->_counterInstance++;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	if (this->_counterInstance == 1) {
		this->_unequipInventory = new AMateria*[this->_unequipSlots];
		for (int i = 0; i < this->_unequipSlots; i++)
			this->_unequipInventory[i] = NULL;
	}
	std::cout << "Player " << CYAN << this->_name << WHIT << " entrou no " << GREN << "jogo " << WHIT << "com " << YELW << "parâmetro!\n" << WHIT;
}

Character::Character( const Character& other ) : ICharacter() {
	this->_counterInstance++;
	this->_name = other._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	if (this->_counterInstance == 1) {
		this->_unequipInventory = new AMateria*[this->_unequipSlots];
		for (int i = 0; i < this->_unequipSlots; i++)
			this->_unequipInventory[i] = NULL;
	}
	std::cout << "Player " << CYAN << this->_name << WHIT << " entrou no " << GREN << "jogo " << WHIT << "através de " << YELW << "cópia!\n" << WHIT;
	*this = other;
}

Character::~Character() {
	std::cout << "Player " << CYAN << this->_name << WHIT << " saiu do " << GREN << "jogo" << WHIT << "!\n";
	this->_counterInstance--;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	if (this->_counterInstance == 0) {
		std::cout << YELW << "Limpando o chão" << WHIT << "!\n";
		for (int i = 0; i < this->_unequipSize; i++) {
			if (this->_unequipInventory[i] != NULL) {
				delete this->_unequipInventory[i];
				this->_unequipInventory[i] = NULL;
			}
		}
		delete[] this->_unequipInventory;
		this->_unequipInventory = NULL;
		this->_unequipSlots = 5;
		this->_unequipSize = 0;
	}
}

Character&			Character::operator=( const Character& other ) {
	if (this != &other) {
		this->_name = other._name;
		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i] != NULL) {
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
			if (other._inventory[i] != NULL)
				this->_inventory[i] = other._inventory[i]->clone();
		}
	}
	return (*this);
}


// ************************************ Public Functions ************************************

std::string const &	Character::getName() const {
	return (this->_name);
}

void				Character::equip( AMateria* m ) {
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			std::cout << CYAN << this->_name << WHIT << " equipou " << GREN << m->getType() << WHIT << " na posição " << YELW << i << WHIT << std::endl;
			return ;
		}
	}
	std::cout << CYAN << this->_name << WHIT << " não pôde equipar " << GREN << m->getType() << WHIT << ": " << YELW << "inventário cheio" << WHIT << "!" << std::endl;
	return ;
}

void				Character::unequip( int idx ) {
	if (idx < 0 || idx >= 4 || this->_inventory[idx] == NULL) {
		std::cout << CYAN << this->_name << WHIT << ": posição " << idx << YELW << " inválida ou vazia" << WHIT << "!" << std::endl;
		return ;
	}

	if (this->_unequipSize >= this->_unequipSlots) {
		int			newSlots = this->_unequipSlots * 2;
		AMateria**	newUnequipInventory = new AMateria*[newSlots];

		for (int i = 0; i < newSlots; i++)
			newUnequipInventory[i] = NULL;
		for (int i = 0; i < this->_unequipSize; i++)
			newUnequipInventory[i] = this->_unequipInventory[i];
		delete[] this->_unequipInventory;
		this->_unequipInventory = newUnequipInventory;
		this->_unequipSlots = newSlots;
	}

	this->_unequipInventory[this->_unequipSize] = this->_inventory[idx];
	std::cout << CYAN << this->_name << WHIT << " desenquipou " << GREN << this->_inventory[idx]->getType() << WHIT << " da posição " << YELW << idx << WHIT << " para o chão (índice " << YELW << this->_unequipSize << WHIT << ")" << std::endl;
	this->_inventory[idx] = NULL;
	this->_unequipSize++;
	return ;
}

void				Character::showInventory( const int& idx ) {
	if (idx >= 0 && idx < 4)
		showMateria(this->_inventory[idx], idx, "Equipados");
	else
		showMatriz(this->_inventory, 4, "Equipados");
	return ;
}

void				Character::use( int idx, ICharacter& target ) {
	if (idx < 0 || idx >= 4 || this->_inventory[idx] == NULL) {
		std::cout << CYAN << this->_name << WHIT << ": não há matéria na posição " << YELW << idx << WHIT << "!" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
	return ;
}


// ************************************ Static Functions ************************************

AMateria*    		Character::getUnequipMateria( int idx ) {
	if (idx >= 0 && idx < _unequipSize && _unequipInventory != NULL) {
		std::cout << "Removendo matéria do chão (índice " << YELW << idx << WHIT << ")\n";
		AMateria*	tmMateria = _unequipInventory[idx];

		_unequipInventory[idx] = NULL;
		for (int i = idx + 1; i < _unequipSize; i++) {
			_unequipInventory[i - 1] = _unequipInventory[i];
			_unequipInventory[i] = NULL;
		}
		_unequipSize--;
		return (tmMateria);
	}
	return (NULL);
}

void				Character::showUnequipInventory( const int& idx ) {
	if (idx >= 0 && idx < _unequipSlots && _unequipInventory != NULL)
		showMateria(_unequipInventory[idx], idx, "Desenquipados");
	else if (_unequipInventory == NULL) {
		std::cout << std::endl << CYAN << std::string(12, '-') << "> Inventário de Desenquipados <";
		std::cout << std::string(12, '-') << std::endl << WHIT;
		for (int i = 0; i < 5; i++)
			std::cout << "[Posição " << i << "] -> " << YELW << "Posição Disponível" << WHIT << std::endl;
		std::cout << std::endl;
	} else 
		showMatriz(_unequipInventory, _unequipSlots, "Desenquipados");
	return ;
}

void				Character::showMatriz( AMateria** matriz, const int& size, const std::string& typeMatriz ) {
	if (matriz != NULL && size > 0) {
		std::cout << std::endl;
		std::cout << CYAN << std::string(12, '-') << "> Inventário de " << typeMatriz << " <";
		std::cout << std::string(12, '-') << std::endl << WHIT;
		for (int i = 0; i < size; i++) {
			std::string		txt = YELW + (std::string)"Posição Disponível" + WHIT;

			if (matriz[i] != NULL)
				txt = (std::string)"Posição em Uso [" + GREN + matriz[i]->getType() + WHIT + "]";
			std::cout << "[Posição " << i << "] -> " << txt << std::endl;
		}
		std::cout << std::endl;
	}
	return ;
}

void				Character::showMateria( const AMateria* item, const int& idx, const std::string& inventory ) {
	std::string		txt = YELW + (std::string)"Posição Disponível" + WHIT;

	if (item != NULL)
		txt = (std::string)"Posição em Uso [" + GREN + item->getType() + WHIT + "]";
	std::cout << "[Posição " << YELW << idx << WHIT << " de " << inventory << "] -> " << txt << std::endl;
	return ;
}
