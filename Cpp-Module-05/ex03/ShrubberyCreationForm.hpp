#ifndef	SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include <string>
#include <fstream>
#include <iostream>
#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm {
	private:
		std::string		target;

	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm( const std::string& target );
		ShrubberyCreationForm( const ShrubberyCreationForm& other );
		ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& other );

		class	FileOutputErrorException : public std::exception {
			public:
				virtual const char*		what() const throw();
		};

		void					action( void ) const ;
};

#endif
