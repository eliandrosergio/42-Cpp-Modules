#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 145, 137) {
	std::cout << "[ShrubberyCreationForm] Constructor padrão chamado\n";
	this->target = "Desconhecido";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "[ShrubberyCreationForm] Destructor chamado\n";
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) :  AForm("shrubbery creation", 145, 137) {
	std::cout << "[ShrubberyCreationForm] Constructor com parâmetro chamado\n";
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other ) : AForm(other) {
	std::cout << "[ShrubberyCreationForm] Constructor de cópia chamado\n";
	this->target = other.target;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other ) {
	std::cout << "[ShrubberyCreationForm] Operador de cópia chamado\n";
	if (this != &other) {
		this->AForm::operator=(other);
		this->target = other.target;
	}
	return (*this);
}

const char*		ShrubberyCreationForm::FileOutputErrorException::what() const throw() {
	return ("ShrubberyCreationFormException: Erro de I/O ao Criar o Arquivo de Saída");
}

void		ShrubberyCreationForm::action( void ) const {
	std::string		name = this->target + "_shrubbery";
	std::ofstream	fileOutput(name.c_str());

	if (!fileOutput.is_open() || fileOutput.bad())
		throw FileOutputErrorException();
	fileOutput << "          .     .  .      #     .      .          .\n";
	fileOutput << "     .       .      .     #       .           .\n";
	fileOutput << "        .      .         ###            .      .      .\n";
	fileOutput << "      .      .   '#:. .:##'##:. .:#'  .      .\n";
	fileOutput << "          .      . '####'###'####'  .\n";
	fileOutput << "       .     '#:.    .:#'###'#:.    .:#'  .        .       .\n";
	fileOutput << "  .             '#########'#########'        .        .\n";
	fileOutput << "        .    '#:.  '####'###'####'  .:#'   .       .\n";
	fileOutput << "     .     .  '#######''##'##''#######'                  .\n";
	fileOutput << "                .'##'#####'#####'##'           .      .\n";
	fileOutput << "    .   '#:. ...  .:##'###'###'##:.  ... .:#'     .\n";
	fileOutput << "      .     '#######'##'#####'##'#######'      .     .\n";
	fileOutput << "    .    .     '#####''#######''#####'    .      .\n";
	fileOutput << "            .     '      |0|      '    .     .\n";
	fileOutput << "       .         .   .   |0|     .        .       .\n";
	fileOutput << ".. .. ..................|000|........................ ......\n";
	fileOutput.close();
	std::cout << "Arquivo de saída \"" << name << "\" criado com sucesso\n";
	return ;
}
