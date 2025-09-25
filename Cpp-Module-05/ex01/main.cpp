#include "Bureaucrat.hpp"
#include "colors.hpp"
#include "Form.hpp"

void	tester01( void ) {
	std::cout << std::endl << AZUL << std::string(8, '-') << "> Tester01: Teste do Constructor Padrão <" << std::string(8, '-') << NORMAL << std::endl;

	std::cout << std::endl;
	try {
		Form	form;
		std::cout << VERDE << "Sucesso: " << form << NORMAL;
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
		Form	brc("Atestado Bancário", -44, 2);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro [grade -44 e 2] -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Form	brc("Atestado Bancário", 2, -44);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro [grade 2 e -44] -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Form	brc("Atestado Bancário", -151, -515);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro [grade -151 e -515] -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Form	brc("Atestado Bancário", 1000, 4);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro [grade 1000 e 4] -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Form	brc("Atestado Bancário", 4, 1000);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro [grade 4 e 1000] -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Form	brc("Atestado Bancário", 151, 515);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro [grade 151 e 515] -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Form	brc("Atestado Bancário", 1, 1);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Form	brc("Carta de Condução", 150, 150);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	try {
		Form	brc("Ficha de Inscrição", 44, 88);
		std::cout << VERDE << "Sucesso: " << brc << NORMAL;
	} catch (const std::exception& e) {
		std::cerr << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	return ;
}

void	tester03( void ) {
	std::cout << std::endl << AZUL << std::string(8, '-') << "> Tester03: Testes da Função de Assinatura do Formulário <" << std::string(8, '-') << NORMAL << std::endl;

	std::cout << std::endl;
	{
		Bureaucrat*	biva = new Bureaucrat("Biva", 10);
		Form*		ficha = new Form("Ficha de Inscrição", 4, 10);
		Form*		cp_ficha = new Form(*ficha);

		try {
			std::cout << std::endl;
			std::cout << VERDE << *biva << *cp_ficha << AMARELOLIGHT;
			cp_ficha->beSigned(*biva);
			std::cout << VERDE << *biva << *cp_ficha << NORMAL;
		} catch (const std::exception& e) {
			std::cout << NORMAL;
			std::cout << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
		}

		std::cout << std::endl;
		delete cp_ficha;
		delete ficha;
		delete biva;
	}

	std::cout << std::endl << ROSALIGHT << std::string(20, '=') << " Outro Teste " << std::string(20, '=') << NORMAL << std::endl;
	try {
		Bureaucrat	elian("Elian", 2);
		Form		ficha("Ficha de Inscrição", 4, 10);
		Form		cp_ficha = ficha;

		std::cout << std::endl;
		std::cout << VERDE << elian << cp_ficha << AMARELOLIGHT;
		cp_ficha.beSigned(elian);
		std::cout << VERDE << elian << cp_ficha << NORMAL << std::endl;
	} catch (const std::exception& e) {
		std::cout << TOMATE << "Erro -> " << e.what() << NORMAL << std::endl;
	}

	std::cout << std::endl;
	return ;
}

void	tester04( void ) {
	std::cout << std::endl << AZUL << std::string(8, '-') << "> Tester04: Testes da Função de Assinatura do Burocrata <" << std::string(8, '-') << NORMAL << std::endl;

	std::cout << std::endl;
	{
		Bureaucrat	biva("Biva", 10);
		Form		ficha("Ficha de Inscrição", 4, 10);

		std::cout << std::endl;
		std::cout << VERDE << biva << ficha << AMARELOLIGHT;
		biva.signForm(ficha);
		std::cout << VERDE << biva << ficha << NORMAL << std::endl;
	}

	std::cout << std::endl << ROSALIGHT << std::string(20, '=') << " Outro Teste " << std::string(20, '=') << NORMAL << std::endl;
	{
		Bureaucrat	elian("Elian", 2);
		Form		ficha("Ficha de Inscrição", 4, 10);

		std::cout << std::endl;
		std::cout << VERDE << elian << ficha << AMARELOLIGHT;
		elian.signForm(ficha);
		std::cout << VERDE << elian << ficha << NORMAL << std::endl;
	}

	std::cout << std::endl;
	return ;
}

int		main( void ) {
	tester01();
	tester02();
	tester03();
	tester04();
	return (0);
}
