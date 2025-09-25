#include "colors.hpp"
#include "Intern.hpp"

void	tester01( const std::string* dataInfo ) {
	std::cout << std::endl << AZUL << std::string(8, '-') << "> Tester01: Testes do RobotomyRequestForm <" << std::string(8, '-') << NORMAL << "\n\n";

	Bureaucrat*	elian = new Bureaucrat(dataInfo[4], 44);
	Intern*		internAny = new Intern();
	AForm*		formPtr;

	std::cout << std::endl << AMARELOLIGHT;
	try {
		formPtr = internAny->makeForm(dataInfo[0], dataInfo[5]);
		std::cout << VERDE << *elian << *formPtr << AMARELOLIGHT;
		elian->signForm(*formPtr);
		std::cout << VERDE << *formPtr << AMARELOLIGHT;
		elian->executeForm(*formPtr);
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl << NORMAL;
	delete formPtr;
	delete internAny;
	delete elian;

	std::cout << std::endl;
	return ;
}

void	tester02( const std::string* dataInfo ) {
	std::cout << std::endl << AZUL << std::string(8, '-') << "> Tester02: Testes do ShrubberyCreationForm <" << std::string(8, '-') << NORMAL << "\n\n";

	Bureaucrat*	elian = new Bureaucrat(dataInfo[4], 134);
	Intern*		internAny = new Intern();
	AForm*		formPtr;

	std::cout << std::endl << AMARELOLIGHT;
	try {
		formPtr = internAny->makeForm(dataInfo[1], dataInfo[5]);
		std::cout << VERDE << *elian << *formPtr << AMARELOLIGHT;
		elian->signForm(*formPtr);
		std::cout << VERDE << *formPtr << AMARELOLIGHT;
		elian->executeForm(*formPtr);
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl << NORMAL;
	delete formPtr;
	delete internAny;
	delete elian;

	std::cout << std::endl;
	return ;
}

void	tester03( const std::string* dataInfo ) {
	std::cout << std::endl << AZUL << std::string(8, '-') << "> Tester03: Testes do PresidentialPardonForm <" << std::string(8, '-') << NORMAL << "\n\n";

	Bureaucrat*	elian = new Bureaucrat(dataInfo[4], 4);
	Intern*		internAny = new Intern();
	AForm*		formPtr;

	std::cout << std::endl << AMARELOLIGHT;
	try {
		formPtr = internAny->makeForm(dataInfo[2], dataInfo[5]);
		std::cout << VERDE << *elian << *formPtr << AMARELOLIGHT;
		elian->signForm(*formPtr);
		std::cout << VERDE << *formPtr << AMARELOLIGHT;
		elian->executeForm(*formPtr);
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl << NORMAL;
	delete formPtr;
	delete internAny;
	delete elian;

	std::cout << std::endl;
	return ;
}

void	tester04( const std::string* dataInfo ) {
	std::cout << std::endl << AZUL << std::string(8, '-') << "> Tester04: Testes do \"ficha de inscrição\" <" << std::string(8, '-') << NORMAL << "\n\n";

	Bureaucrat*	elian = new Bureaucrat(dataInfo[4], 4);
	Intern*		internAny = new Intern();
	AForm*		formPtr;

	std::cout << std::endl << AMARELOLIGHT;
	try {
		formPtr = internAny->makeForm(dataInfo[3], dataInfo[5]);
		if (formPtr != NULL) {	
			std::cout << VERDE << *elian << *formPtr << AMARELOLIGHT;
			elian->signForm(*formPtr);
			std::cout << VERDE << *formPtr << AMARELOLIGHT;
			elian->executeForm(*formPtr);
		}
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl << NORMAL;
	if (formPtr != NULL)
		delete formPtr;
	delete internAny;
	delete elian;

	std::cout << std::endl;
	return ;
}

int		main( void ) {
	std::string		dataInfo[6] = { "robotomy request", "shrubbery creation", "presidential pardon", "ficha de inscrição", "Elian", "Bivanio" };

	tester01( dataInfo );
	tester02( dataInfo );
	tester03( dataInfo );
	tester04( dataInfo );
	return (0);
}
