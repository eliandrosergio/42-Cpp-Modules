#include "Bureaucrat.hpp"
#include "colors.hpp"

void	tester01( void ) {
	std::cout << std::endl << AZUL << std::string(8, '-') << "> Tester01: Teste do Constructor Padrão <" << std::string(8, '-') << NORMAL << std::endl;

	std::cout << std::endl;
	try {
		Bureaucrat	brc;
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	return ;
}

void	tester02( void ) {
	std::cout << std::endl << AZUL << std::string(8, '-') << "> Tester02: Testes do Constructor com Parâmetro <" << std::string(8, '-') << NORMAL << std::endl;

	std::cout << std::endl;
	try {
		Bureaucrat	brc("Elian", -44);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro [grade -44] -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat	brc("Elian", 0);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro [grade 0] -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat	brc("Elian", 151);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro [grade 151] -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat	brc("Elian", 1000);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro [grade 1000] -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat	brc("Elian", 1);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat	brc("Elian", 150);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat	brc("Elian", 44);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	return ;
}

void	tester03( void ) {
	std::cout << std::endl << AZUL << std::string(8, '-') << "> Tester03: Testes das Funções de Promoção e Despromoção do Grade <" << std::string(8, '-') << NORMAL << std::endl;

	std::cout << std::endl;
	{
		Bureaucrat*	elian = new Bureaucrat("Elian", 2);
		Bureaucrat*	cp_elian = new Bureaucrat(*elian);

		try {
			std::cout << std::endl << VERDE << *cp_elian << AMARELOLIGHT;
			cp_elian->incrementGrade();
			std::cout << VERDE << *cp_elian << AMARELOLIGHT;
			cp_elian->incrementGrade();
			std::cout << VERDE << *cp_elian << NORMAL;
		} catch (const std::exception& e) {
			std::cout << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
		}

		std::cout << std::endl;
		delete cp_elian;
		delete elian;
	}

	std::cout << std::endl << ROSALIGHT << std::string(20, '=') << " Outro Teste " << std::string(20, '=') << NORMAL << std::endl;
	{
		Bureaucrat*	elian = new Bureaucrat("Elian", 149);
		Bureaucrat*	biva = new Bureaucrat("Biva", 2);
		*biva = *elian;

		try {
			std::cout << std::endl << VERDE << *biva << AMARELOLIGHT;
			biva->decrementGrade();
			std::cout << VERDE << *biva << AMARELOLIGHT;
			biva->decrementGrade();
			std::cout << VERDE << *biva << NORMAL;
		} catch (const std::exception& e) {
			std::cout << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
		}

		std::cout << std::endl;
		delete biva;
		delete elian;
	}

	std::cout << std::endl;
	return ;
}

int		main( void ) {
	tester01();
	tester02();
	tester03();
	return (0);
}
