#include "HumanA.h"

// constructor
HumanA::HumanA(std::string name, Weapon& weapon) 
	: name(name), weapon(weapon) {}

// destructor
HumanA::~HumanA() {
	std::cout << "\n\nO seguinte HumanA foi destruido: " << this->name;
}

// attack function (hora da violência)
void HumanA::attack() {
	std::cout << std::endl << this->name << " attacks with their " << this->weapon.getType();
}

// setter
void HumanA::setWeapon(Weapon& weapon) {
	this->weapon = weapon;
}
