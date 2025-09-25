#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
	private:
		std::string name; // Private var do nome

	public:
		Zombie(); // Construtor padrão
		Zombie(std::string name); // Construtor com nome
		~Zombie(); // Destrutor

		// Função para anuciar
		void announce( void );

		// Função para o nome
		void setName(std::string name);
};

Zombie*	zombieHorde( int N, std::string name );

#endif
