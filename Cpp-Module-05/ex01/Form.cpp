#include "Form.hpp"

Form::Form() : _name("Desconhecido"), _gradeSign(0), _gradeExecute(0) {
	std::cout << "[Form] Constructor padrão chamado\n";
	this->_signed = false;
	throw GradeTooLowException();
}

Form::~Form() {
	std::cout << "[Form] Destructor chamado\n";
}

Form::Form( const Form& other ) : _name(other._name), _gradeSign(other._gradeSign), _gradeExecute(other._gradeExecute) {
	std::cout << "[Form] Constructor de cópia chamado\n";
	this->_signed = other._signed;
}

Form&			Form::operator=( const Form& other ) {
	std::cout << "[Form] Operador de cópia chamado\n";
	if (this != &other)
		this->_signed = other._signed;
	return (*this);
}

Form::Form( const std::string name, const int gradeSign, const int gradeExecute ) : _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
	std::cout << "[Form] Constructor com parâmetro chamado\n";
	this->_signed = false;
	if (gradeSign < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExecute > 150)
		throw GradeTooLowException();
}

const char*		Form::GradeTooHighException::what() const throw() {
	return ("FormException: Grau Muito Alto");
}

const char*		Form::GradeTooLowException::what() const throw() {
	return ("FormException: Grau Muito Baixo");
}

std::string		Form::getName( void ) const {
	return (this->_name);
}

bool			Form::getSigned( void ) const {
	return (this->_signed);
}

unsigned int	Form::getGradeSign( void ) const {
	return (this->_gradeSign);
}

unsigned int	Form::getGradeExecute( void ) const {
	return (this->_gradeExecute);
}

void			Form::beSigned( const Bureaucrat& brc ) {
	if (this->_signed == false) {
		std::cout << "[Form] Assinatura de Formulário em Andamento: ";
		if (brc.getGrade() > this->getGradeSign()) {
			std::cout << "Assinatura Recusada\n";
			throw GradeTooLowException();
		}
		std::cout << "Assinatura Permitida\n";
		this->_signed = true;
	} else std::cout << "[Form] Este Formulário já está Assinado\n";
	return ;
}

std::ostream&	operator<<( std::ostream& os, Form& form ) {
	os << form.getName() << ", grade form (to sign) " << form.getGradeSign() << " and degree (to execute) " << form.getGradeExecute() << ", is " << ((form.getSigned()) ? "" : "not ") << "signed" << std::endl;
	return (os);
}
