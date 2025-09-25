#include "HumanA.h"

// constructor
HumanA::HumanA(std::string name, Weapon& weapon) 
	: name(name), weapon(weapon) {}

// destructor
HumanA::~HumanA() {
	std::cout << "\nO seguinte HumanA foi destruido: " << this->name << std::endl;
}

// attack function (hora da violência)
void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType()  << std::endl;
}

// setter
void HumanA::setWeapon(Weapon& weapon) {
	this->weapon = weapon;
}
