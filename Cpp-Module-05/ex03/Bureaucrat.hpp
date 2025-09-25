#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

class	AForm;

class	Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat( const Bureaucrat& other );
		Bureaucrat( const std::string name, int grade );
		Bureaucrat&			operator=( const Bureaucrat& other );

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char*		what() const throw();
		};
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char*		what() const throw();
		};

		void				incrementGrade( void );
		void				decrementGrade( void );
		std::string			getName( void ) const ;
		unsigned int		getGrade( void ) const ;
		void				signForm( AForm& form ) const ;
		void				executeForm(AForm const & form) const ;
};

std::ostream&	operator<<( std::ostream& os, Bureaucrat& brc );

#endif
