#include "Weapon.h"

// constructor
Weapon::Weapon(std::string type) {
	this->type = type;
}

// destructor
Weapon::~Weapon() {
	std::cout << "A seguinte arma foi destruida: " << this->type << "\n\n";
}

// getter
const std::string& Weapon::getType() const {
	return (this->type);
}

// setter
void Weapon::setType(const std::string& newType) {
	this->type = newType;
}
