#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class	Brain
{
	private:
		std::string			ideas[100];

	public:
		Brain();
		~Brain();
		Brain( const Brain& other );
		Brain&				operator=( const Brain& other );

		const std::string&	getIdea( const int& id ) const ;
		void				setIdea( const int& id, const std::string& idea );
};

#endif
