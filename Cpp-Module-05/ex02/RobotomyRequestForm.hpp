#ifndef	ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include <string>
#include <iostream>
#include <stdlib.h>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class	RobotomyRequestForm : public AForm {
	private:
		std::string		target;

	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm( const std::string& target );
		RobotomyRequestForm( const RobotomyRequestForm& other );
		RobotomyRequestForm&	operator=( const RobotomyRequestForm& other );

		void					action( void ) const ;
};

#endif
