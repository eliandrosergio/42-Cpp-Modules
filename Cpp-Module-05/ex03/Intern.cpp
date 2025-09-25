#include "Intern.hpp"

Intern::Intern() {
	std::cout << "[Intern] Constructor padrão chamado\n";
}

Intern::~Intern() {
	std::cout << "[Intern] Destructor chamado\n";
}

Intern::Intern( const Intern& other ) {
	std::cout << "[Intern] Constructor de cópia chamado\n";
	*this = other;
}

Intern&		Intern::operator=( const Intern& other ) {
	std::cout << "[Intern] Operador de cópia chamado\n";
	if (this == &other)
		return (*this);
	return (*this);
}

const char*	Intern::TypeFormNotFoundException::what() const throw() {
	return ("InternException: Tipo de Formulário Não Encontrado");
}

AForm*		Intern::RobotomyRequest( const std::string& target ) {
	return (new RobotomyRequestForm(target));
}

AForm*		Intern::ShrubberyCreation( const std::string& target ) {
	return (new ShrubberyCreationForm(target));
}

AForm*		Intern::PresidentialPardon( const std::string& target ) {
	return (new PresidentialPardonForm(target));
}

AForm*		Intern::makeForm( const std::string& typeForm, const std::string& target ) {
	std::cout << "[Intern] Intern trying to create a form: ";
	try {
		std::string		typesForms[3] = { "robotomy request", "shrubbery creation", "presidential pardon" };
		AForm*			( Intern::*ftFormsPtr[3] ) ( const std::string& target ) = {
			ftFormsPtr[0] = &Intern::RobotomyRequest,
			ftFormsPtr[1] = &Intern::ShrubberyCreation,
			ftFormsPtr[2] = &Intern::PresidentialPardon
		};

		for (int i = 0; i < 3; i++) {
			if (typeForm == typesForms[i]) {
				std::cout << "Intern creates \"" << typeForm << "\"\n";
				return ((this->*ftFormsPtr[i])(target));
			}
		}
		throw TypeFormNotFoundException();
	} catch (const std::exception& e) {
		std::cerr << "Intern has not created \"" << typeForm << "\"\n" << e.what() << std::endl;
	}
	return (NULL);
}
