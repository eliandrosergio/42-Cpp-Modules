#include "Harl.h"

// constructor
Harl::Harl() {
	// Iniciando levels com os valores de dos levels
	this->levels[0] = "DEBUG";
	this->levels[1] = "INFO";
	this->levels[2] = "WARNING";
	this->levels[3] = "ERROR";

	// Iniciando o ptr das funções com as -funções-membros
	ptrFt[0] = &Harl::debug;
	ptrFt[1] = &Harl::info;
	ptrFt[2] = &Harl::warning;
	ptrFt[3] = &Harl::error;
}

// destructor
Harl::~Harl() {}

// função-membro privada debug
void Harl::debug( void ) {
	std::cout << "[ DEBUG ]\nEliandro acabou de configurar a resolução para 1920x1080 e ativou o V-Sync no menu de opções gráficas. Isso deve reduzir o screen tearing.\n";
}

// função-membro privada info
void Harl::info( void ) {
	std::cout << "[ INFO ]\nEliandro iniciou o servidor do jogo às 19:32. Modo multiplayer ativado com 5 jogadores conectados.\n";
}

// função-membro privada warning
void Harl::warning( void ) {
	std::cout << "[ WARNING ]\nA temperatura da GPU de Eliandro ultrapassou 85°C durante a renderização em 4K. Recomenda-se verificar o sistema de refrigeração.\n";
}

// função-membro privada error
void Harl::error( void ) {
	std::cout << "[ ERROR ]\nFalha ao salvar o progresso de Eliandro em 'Dark Galaxy RPG'. O disco está cheio ou corrompido. Dados não recuperáveis.\n";
}

// função membro pública
void Harl::complain( std::string level ) {
	int	id = 4;

	for (int i = 0; i < 4; i++) {
		if (this->levels[i] == level) {
			id = i; // redifinindo o id
		}
	}

	// Verificando qual nivel rodar com base no id
	switch (id)
	{
		case 0:
			(this->*ptrFt[0])();
			std::cout << std::endl;
			// fall through
		case 1:
			(this->*ptrFt[1])();
			std::cout << std::endl;
			// fall through
		case 2:
			(this->*ptrFt[2])();
			std::cout << std::endl;
			// fall through
		case 3:
			(this->*ptrFt[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break ;
	}

	// retornando
	return ;
}
