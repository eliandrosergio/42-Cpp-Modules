#include "Weapon.h"

// constructor
Weapon::Weapon(std::string type) {
	this->type = type;
}

// destructor
Weapon::~Weapon() {
	std::cout << "\nA seguinte arma foi destruida: " << this->type << std::endl;
}

// getter
const std::string& Weapon::getType() const {
	return (this->type);
}

// setter
void Weapon::setType(const std::string& newType) {
	this->type = newType;
}
