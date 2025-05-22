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
	std::cout << "\nEliandro acabou de configurar a resolução para 1920x1080 e ativou o V-Sync no menu de opções gráficas. Isso deve reduzir o screen tearing.";
}

// função-membro privada info
void Harl::info( void ) {
	std::cout << "\nEliandro iniciou o servidor do jogo às 19:32. Modo multiplayer ativado com 5 jogadores conectados.";
}

// função-membro privada warning
void Harl::warning( void ) {
	std::cout << "\nA temperatura da GPU de Eliandro ultrapassou 85°C durante a renderização em 4K. Recomenda-se verificar o sistema de refrigeração.";
}

// função-membro privada error
void Harl::error( void ) {
	std::cout << "\nFalha ao salvar o progresso de Eliandro em 'Dark Galaxy RPG'. O disco está cheio ou corrompido. Dados não recuperáveis.";
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
