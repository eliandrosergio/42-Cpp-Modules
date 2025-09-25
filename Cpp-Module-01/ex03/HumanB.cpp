#include "HumanB.h"

// constructor
HumanB::HumanB(std::string name) {
	this->name = name;
}

// destructor
HumanB::~HumanB() {
	std::cout << "\nO seguinte HumanB foi destruido: " << this->name << std::endl;
}

// attack function (hora da violência)
void HumanB::attack() {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

// setter
void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}
