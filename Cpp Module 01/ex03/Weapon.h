#ifndef WEAPON_H
#define WEAPON_H

// iostream lib (claro como a água)
#include <iostream>
#include <string>

class Weapon {
	private:
		std::string type; // my private var

	public:
		Weapon(std::string type); // constructor
		~Weapon(); // destructor

		const std::string& getType() const; // getter
		void setType(const std::string& newType); // setter
};

#endif
