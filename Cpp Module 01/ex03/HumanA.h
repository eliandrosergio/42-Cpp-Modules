#ifndef HUMANA_H
#define HUMANA_H

#include <iostream> // iostream lib (claro como a água)
#include "Weapon.h" // my weapon lib (lógico nhé)

class HumanA {
	private:
		std::string name; // my private var name
		Weapon& weapon; // my private var weapon

	public:
		HumanA(std::string name, Weapon& weapon); // constructor
		~HumanA(); // destructor

		void attack(); // attack function (hora da violência)
		void setWeapon(Weapon &weapon); // setter
};

#endif
