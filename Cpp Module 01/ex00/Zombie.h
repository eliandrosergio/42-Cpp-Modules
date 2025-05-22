#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
	private:
		std::string name; // Private var do nome

	public:
		Zombie(std::string name); // Construtor
		~Zombie(); // Destrutor

		// Função para anuciar
		void announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
