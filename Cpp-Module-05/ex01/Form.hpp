#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class	Bureaucrat;

class	Form {
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExecute;

	public:
		Form();
		~Form();
		Form( const Form& other );
		Form&				operator=( const Form& other );
		Form( const std::string name, const int gradeSign, const int gradeExecute );

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char*		what() const throw();
		};
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char*		what() const throw();
		};

		std::string			getName( void ) const ;
		bool				getSigned( void ) const ;
		unsigned int		getGradeSign( void ) const ;
		unsigned int		getGradeExecute( void ) const ;
		void				beSigned( const Bureaucrat& brc );
};

std::ostream&	operator<<( std::ostream& os, Form& form );

#endif
