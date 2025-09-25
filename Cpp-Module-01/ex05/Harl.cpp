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
Harl::~Harl() {
	std::cout << "\n >> Um objecto Harl foi destruido!\n\n";
}

// função-membro privada debug
void Harl::debug( void ) {
	std::cout << "Eliandro acabou de configurar a resolução para 1920x1080 e ativou o V-Sync no menu de opções gráficas. Isso deve reduzir o screen tearing.\n";
}

// função-membro privada info
void Harl::info( void ) {
	std::cout << "Eliandro iniciou o servidor do jogo às 19:32. Modo multiplayer ativado com 5 jogadores conectados.\n";
}

// função-membro privada warning
void Harl::warning( void ) {
	std::cout << "A temperatura da GPU de Eliandro ultrapassou 85°C durante a renderização em 4K. Recomenda-se verificar o sistema de refrigeração.\n";
}

// função-membro privada error
void Harl::error( void ) {
	std::cout << "Falha ao salvar o progresso de Eliandro em 'Dark Galaxy RPG'. O disco está cheio ou corrompido. Dados não recuperáveis.\n";
}

// função membro pública
void Harl::complain( std::string level ) {
	for (int i = 0; i < 4; i++) {
		if (this->levels[i] == level) {
			(this->*ptrFt[i])();  // Chamada da função através do ponteiro
		}
	}
	return ;
}
