#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Burocrata") {
	std::cout << "[Bureaucrat] Constructor padrão chamado\n";
	throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
	std::cout << "[Bureaucrat] Destructor chamado\n";
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) : _name(other._name) {
	std::cout << "[Bureaucrat] Constructor de cópia chamado\n";
	this->_grade = other._grade;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name) {
	std::cout << "[Bureaucrat] Constructor com parâmetro chamado\n";
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat&		Bureaucrat::operator=( const Bureaucrat& other ) {
	std::cout << "[Bureaucrat] Operador de cópia chamado\n";
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

const char*		Bureaucrat::GradeTooHighException::what() const throw() {
	return ("BureaucratException: Grau Muito Alto");
}

const char*		Bureaucrat::GradeTooLowException::what() const throw() {
	return ("BureaucratException: Grau Muito Baixo");
}

void			Bureaucrat::incrementGrade( void ) {
	std::cout << "[Bureaucrat] Promoção de \"" << this->_name << "\" em Andamento: ";
	if (this->_grade == 1) {
		std::cout << "Falha ao Promover\n";
		throw Bureaucrat::GradeTooHighException();
	}
	std::cout << "Sucesso ao Promover\n";
	this->_grade--;
	return ;
}

void			Bureaucrat::decrementGrade( void ) {
	std::cout << "[Bureaucrat] Despromoção de \"" << this->_name << "\" em Andamento: ";
	if (this->_grade == 150) {
		std::cout << "Falha ao Despromover\n";
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << "Sucesso ao Despromover\n";
	this->_grade++;
	return ;
}

std::string		Bureaucrat::getName( void ) const {
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

void			Bureaucrat::signForm( AForm& form ) const {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed \"" << form.getName() << "\"\n";
	} catch (const std::exception& e) {
		std::cerr << this->_name << " couldn’t sign \"" << form.getName() << "\" because \"" << e.what() << "\"\n";
	}
	return ;
}

void			Bureaucrat::executeForm(AForm const & form) const {
	try {
		form.execute(*this);
		std::cout << this->_name << " executed \"" << form.getName() << "\"\n";
	} catch (const std::exception& e) {
		std::cerr << this->_name << " couldn’t exec \"" << form.getName() << "\" because \"" << e.what() << "\"\n";
	}
	return ;
}

std::ostream&	operator<<( std::ostream& os, Bureaucrat& brc ) {
	os << brc.getName() << ", bureaucrat grade " << brc.getGrade() << std::endl;
	return (os);
}
