#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential pardon", 25, 5) {
	std::cout << "[PresidentialPardonForm] Constructor padrão chamado\n";
	this->target = "Desconhecido";
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "[PresidentialPardonForm] Destructor chamado\n";
}

PresidentialPardonForm::PresidentialPardonForm( const std::string& target ) :  AForm("presidential pardon", 25, 5) {
	std::cout << "[PresidentialPardonForm] Constructor com parâmetro chamado\n";
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other ) : AForm(other) {
	std::cout << "[PresidentialPardonForm] Constructor de cópia chamado\n";
	this->target = other.target;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& other ) {
	std::cout << "[PresidentialPardonForm] Operador de cópia chamado\n";
	if (this != &other) {
		this->AForm::operator=(other);
		this->target = other.target;
	}
	return (*this);
}

void		PresidentialPardonForm::action( void ) const {
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return ;
}
