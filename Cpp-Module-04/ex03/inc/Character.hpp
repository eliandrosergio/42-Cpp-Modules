#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class	ICharacter;
class	AMateria;

class	Character : public ICharacter
{
	private:
		std::string				_name;
		AMateria*				_inventory[4];
		static int				_unequipSize;
		static int				_unequipSlots;
		static int				_counterInstance;
		static AMateria**		_unequipInventory;

	public:
		Character();
		~Character();
		Character( const Character& other );
		Character( const std::string& name );
		Character&				operator=( const Character& other );

		std::string const &		getName() const;
		void					unequip( int idx );
		void					equip( AMateria* m );
		void					showInventory( const int& idx );
		void					use( int idx, ICharacter& target );

		static AMateria*		getUnequipMateria( int idx );
		static void				showUnequipInventory( const int& idx );
		static void				showMatriz(AMateria** matriz, const int& size, const std::string& typeMatriz );
		static void				showMateria( const AMateria* item, const int& idx, const std::string& inventory );
};

#endif
