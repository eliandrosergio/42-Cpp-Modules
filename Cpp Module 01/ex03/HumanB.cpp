#include "HumanB.h"

// constructor
HumanB::HumanB(std::string name) {
	this->name = name;
}

// destructor
HumanB::~HumanB() {
	std::cout << "\n\nO seguinte HumanB foi destruido: " << this->name;
}

// attack function (hora da violência)
void HumanB::attack() {
	std::cout << std::endl << this->name << " attacks with their " << this->weapon->getType();
}

// setter
void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}
