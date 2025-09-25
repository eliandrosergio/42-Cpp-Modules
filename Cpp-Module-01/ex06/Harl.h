#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl {
	private:
		// funções-membro privadas
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

		// Array de strings para os níveis
		std::string levels[4];

		// Array de ponteiros para funções membro
		void (Harl::*ptrFt[4])(void);

	public:
		Harl(); // constructor
		~Harl(); // destructor

		// função membro pública
		void complain( std::string level );
};

#endif
