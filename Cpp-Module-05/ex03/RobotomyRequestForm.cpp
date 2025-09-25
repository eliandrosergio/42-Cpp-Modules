#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request", 72, 45) {
	std::cout << "[RobotomyRequestForm] Constructor padrão chamado\n";
	this->target = "Desconhecido";
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "[RobotomyRequestForm] Destructor chamado\n";
}

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ) :  AForm("robotomy request", 72, 45) {
	std::cout << "[RobotomyRequestForm] Constructor com parâmetro chamado\n";
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other ) : AForm(other) {
	std::cout << "[RobotomyRequestForm] Constructor de cópia chamado\n";
	this->target = other.target;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& other ) {
	std::cout << "[RobotomyRequestForm] Operador de cópia chamado\n";
	if (this != &other) {
		this->AForm::operator=(other);
		this->target = other.target;
	}
	return (*this);
}

void		RobotomyRequestForm::action( void ) const {
	int		isSuccessfully = 0;

	isSuccessfully = rand() % 2;
	std::cout << "** drilling noises **" << std::endl;
	if (isSuccessfully == 1)
		std::cout << this->target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "The " << this->target << "'s robotomy failed" << std::endl;
	return ;
}
