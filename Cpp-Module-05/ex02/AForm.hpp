#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class	Bureaucrat;

class	AForm {
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExecute;

	public:
		AForm();
		virtual ~AForm();
		AForm( const AForm& other );
		AForm&			operator=( const AForm& other );
		AForm( const std::string name, const int gradeSign, const int gradeExecute );

		class	GradeTooHighException : public std::exception {
			public:
				virtual const char*		what() const throw();
		};
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char*		what() const throw();
		};
		class	FormNotSignedException : public std::exception {
			public:
				virtual const char*		what() const throw();
		};

		std::string		getName( void ) const ;
		bool			getSigned( void ) const ;
		unsigned int	getGradeSign( void ) const ;
		unsigned int	getGradeExecute( void ) const ;
		void			beSigned( const Bureaucrat& brc );

		virtual void	action( void ) const = 0;
		void			execute(Bureaucrat const & executor) const ;
};

std::ostream&	operator<<( std::ostream& os, AForm& form );

#endif
