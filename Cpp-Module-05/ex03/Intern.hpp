#ifndef INTERN
#define INTERN

#include <string>
#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern {
	public:
		Intern();
		~Intern();
		Intern( const Intern& other );
		Intern&		operator=( const Intern& other );

		class	TypeFormNotFoundException : public std::exception {
			public:
				virtual const char*		what() const throw();
		};

		AForm*		RobotomyRequest( const std::string& target );
		AForm*		ShrubberyCreation( const std::string& target );
		AForm*		PresidentialPardon( const std::string& target );

		AForm*		makeForm( const std::string& typeForm, const std::string& target );
};

#endif
