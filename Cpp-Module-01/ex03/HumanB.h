#ifndef HUMANB_H
# define HUMANB_H

#include <iostream> // iostream lib (claro como a água)
#include "Weapon.h" // my weapon lib (lógico nhé)

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;

	public:
		HumanB(std::string name); // constructor
		~HumanB(); // destructor

		void attack(); // attack function (hora da violência)
		void setWeapon(Weapon &weapon); // setter
};

#endif
