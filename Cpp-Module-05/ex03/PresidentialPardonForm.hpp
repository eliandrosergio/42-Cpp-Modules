#ifndef	PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include <string>
#include <iostream>
#include "AForm.hpp"

class	PresidentialPardonForm : public AForm {
	private:
		std::string		target;

	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm( const std::string& target );
		PresidentialPardonForm( const PresidentialPardonForm& other );
		PresidentialPardonForm&	operator=( const PresidentialPardonForm& other );

		void					action( void ) const ;
};

#endif
