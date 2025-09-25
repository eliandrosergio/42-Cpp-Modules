#include "AForm.hpp"

AForm::AForm() : _name("Desconhecido"), _gradeSign(0), _gradeExecute(0) {
	std::cout << "[AForm] Constructor padrão chamado\n";
	this->_signed = false;
	throw GradeTooLowException();
}

AForm::~AForm() {
	std::cout << "[AForm] Destructor chamado\n";
}

AForm::AForm( const AForm& other ) : _name(other._name), _gradeSign(other._gradeSign), _gradeExecute(other._gradeExecute) {
	std::cout << "[AForm] Constructor de cópia chamado\n";
	this->_signed = other._signed;
}

AForm&			AForm::operator=( const AForm& other ) {
	std::cout << "[AForm] Operador de cópia chamado\n";
	if (this != &other)
		this->_signed = other._signed;
	return (*this);
}

AForm::AForm( const std::string name, const int gradeSign, const int gradeExecute ) : _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
	std::cout << "[AForm] Constructor com parâmetro chamado\n";
	this->_signed = false;
	if (gradeSign < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExecute > 150)
		throw GradeTooLowException();
}

const char*		AForm::GradeTooHighException::what() const throw() {
	return ("FormException: Grau Muito Alto");
}

const char*		AForm::GradeTooLowException::what() const throw() {
	return ("FormException: Grau Muito Baixo");
}

const char*		AForm::FormNotSignedException::what() const throw() {
	return ("FormException: Formulário Não Assinado");
}

std::string		AForm::getName( void ) const {
	return (this->_name);
}

bool			AForm::getSigned( void ) const {
	return (this->_signed);
}

unsigned int	AForm::getGradeSign( void ) const {
	return (this->_gradeSign);
}

unsigned int	AForm::getGradeExecute( void ) const {
	return (this->_gradeExecute);
}

void			AForm::beSigned( const Bureaucrat& brc ) {
	if (this->_signed == false) {
		std::cout << "[AForm] Assinatura do Formulário \"" << this->_name << "\" em Andamento: ";
		if (brc.getGrade() > this->getGradeSign()) {
			std::cout << "Assinatura Recusada\n";
			throw GradeTooLowException();
		}
		std::cout << "Assinatura Permitida\n";
		this->_signed = true;
	} else std::cout << "[AForm] Este Formulário já está Assinado\n";
	return ;
}

void		AForm::execute(Bureaucrat const & executor) const {
	std::cout << "[AForm] Execução do Formulário \"" << this->_name << "\" em Andamento: ";
	if (!this->getSigned()) {
		std::cout << "Execução Recusada\n";
		throw FormNotSignedException();
	}
	if (executor.getGrade() > this->getGradeExecute()) {
		std::cout << "Execução Recusada\n";
		throw GradeTooLowException();
	}
	std::cout << "Execução Permitida\n";
	this->action();
	return ;
}

std::ostream&	operator<<( std::ostream& os, AForm& form ) {
	os << form.getName() << ", grade form (to sign) " << form.getGradeSign() << " and degree (to execute) " << form.getGradeExecute() << ", is " << ((form.getSigned()) ? "" : "not ") << "signed" << std::endl;
	return (os);
}
