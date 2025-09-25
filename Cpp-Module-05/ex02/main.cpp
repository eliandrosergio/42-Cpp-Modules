#include "colors.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void	tester01( void ) {
	std::cout << std::endl << AZUL << std::string(8, '-') << "> Tester01: Testes do ShrubberyCreationForm <" << std::string(8, '-') << NORMAL << "\n\n";

	Bureaucrat*				biva = new Bureaucrat("Biva", 146);
	Bureaucrat*				elian = new Bureaucrat("Elian", 138);
	ShrubberyCreationForm*	shcreform = new ShrubberyCreationForm("Home");

	std::cout << std::endl;
	try {
		std::cout << VERDE << *elian << *shcreform << AMARELOLIGHT;
		shcreform->execute(*elian);
		std::cout << VERDE << *elian << *shcreform << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		std::cout << VERDE << *biva << *shcreform << AMARELOLIGHT;
		shcreform->beSigned(*biva);
		std::cout << VERDE << *biva << *shcreform << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl << AMARELOLIGHT;
	try {
		biva->incrementGrade();
		std::cout << VERDE << *biva << *shcreform << AMARELOLIGHT;
		shcreform->beSigned(*biva);
		std::cout << VERDE << *shcreform << AMARELOLIGHT;
		shcreform->execute(*biva);
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		std::cout << VERDE << *elian << *shcreform << AMARELOLIGHT;
		elian->executeForm(*shcreform);
		shcreform->execute(*elian);
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl << AMARELOLIGHT;
	try {
		elian->incrementGrade();
		std::cout << VERDE << *elian << *shcreform << AMARELOLIGHT;
		elian->executeForm(*shcreform);
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl << NORMAL;
	delete biva;
	delete elian;
	delete shcreform;

	std::cout << std::endl;
	return ;
}

void	tester02( void ) {
	std::cout << std::endl << AZUL << std::string(8, '-') << "> Tester02: Testes do RobotomyRequestForm <" << std::string(8, '-') << NORMAL << "\n\n";

	Bureaucrat*				biva = new Bureaucrat("Biva", 73);
	Bureaucrat*				elian = new Bureaucrat("Elian", 46);
	RobotomyRequestForm*	shcreform = new RobotomyRequestForm("Lizandro");

	std::cout << std::endl;
	try {
		std::cout << VERDE << *elian << *shcreform << AMARELOLIGHT;
		shcreform->execute(*elian);
		std::cout << VERDE << *elian << *shcreform << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		std::cout << VERDE << *biva << *shcreform << AMARELOLIGHT;
		shcreform->beSigned(*biva);
		std::cout << VERDE << *biva << *shcreform << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl << AMARELOLIGHT;
	try {
		biva->incrementGrade();
		std::cout << VERDE << *biva << *shcreform << AMARELOLIGHT;
		shcreform->beSigned(*biva);
		std::cout << VERDE << *shcreform << AMARELOLIGHT;
		shcreform->execute(*biva);
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		std::cout << VERDE << *elian << *shcreform << AMARELOLIGHT;
		elian->executeForm(*shcreform);
		shcreform->execute(*elian);
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl << AMARELOLIGHT;
	try {
		elian->incrementGrade();
		std::cout << VERDE << *elian << *shcreform << AMARELOLIGHT;
		elian->executeForm(*shcreform);
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl << NORMAL;
	delete biva;
	delete elian;
	delete shcreform;

	std::cout << std::endl;
	return ;
}

void	tester03( void ) {
	std::cout << std::endl << AZUL << std::string(8, '-') << "> Tester03: Testes do PresidentialPardonForm <" << std::string(8, '-') << NORMAL << "\n\n";

	Bureaucrat*				biva = new Bureaucrat("Biva", 26);
	Bureaucrat*				elian = new Bureaucrat("Elian", 6);
	PresidentialPardonForm*	shcreform = new PresidentialPardonForm("Aurio");

	std::cout << std::endl;
	try {
		std::cout << VERDE << *elian << *shcreform << AMARELOLIGHT;
		shcreform->execute(*elian);
		std::cout << VERDE << *elian << *shcreform << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		std::cout << VERDE << *biva << *shcreform << AMARELOLIGHT;
		shcreform->beSigned(*biva);
		std::cout << VERDE << *biva << *shcreform << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl << AMARELOLIGHT;
	try {
		biva->incrementGrade();
		std::cout << VERDE << *biva << *shcreform << AMARELOLIGHT;
		shcreform->beSigned(*biva);
		std::cout << VERDE << *shcreform << AMARELOLIGHT;
		shcreform->execute(*biva);
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		std::cout << VERDE << *elian << *shcreform << AMARELOLIGHT;
		elian->executeForm(*shcreform);
		shcreform->execute(*elian);
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl << AMARELOLIGHT;
	try {
		elian->incrementGrade();
		std::cout << VERDE << *elian << *shcreform << AMARELOLIGHT;
		elian->executeForm(*shcreform);
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl << NORMAL;
	delete biva;
	delete elian;
	delete shcreform;

	std::cout << std::endl;
	return ;
}

int		main( void ) {
	tester01();
	tester02();
	tester03();
	return (0);
}
