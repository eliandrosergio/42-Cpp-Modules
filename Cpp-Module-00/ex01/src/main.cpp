#include "Serializer.hpp"

// =========================== main utils funcs ===========================

// func para começar os processos, localizada em utils.cpp
void	carregar_jogadores( const int &numJog, const bool &printJog );

// func para validar uma resposta digitada pelo usuário
bool	validRes( const std::string &res, bool exibeMsgs ) {
	// se a res (resposta) for "N" ou "n" retorna "false"
	// o mesmo acontece se a res (resposta) for diferente de "S" e "s"
	if ((res == "N" || res == "n") || (res != "S" && res != "s")) {
		if (exibeMsgs)
			std::cout << "Resposta fora do intervalo válido (S ou N), usando o padrão (N)..." << std::endl;
		return (false);
	}
	return (true);
}

// =========================== start funcs ===========================

// func para começar, mas antes pergunta coisas ao usuário
void	low_start( void ) {
	std::string res;
	int			numJogador = 0;
	bool		printJog = false;

	// número de jogadores
	std::cout << std::endl << "Deseja testar com quantos jogadores? (1/2) > ";
	std::getline(std::cin, res);
	numJogador = (res == "1") ? 1 : 2;
	if (res != "1" && res != "2")
		std::cout << "Resposta fora do intervalo válido (1 ou 2), usando o padrão (2)..." << "\n\n";

	// exibe todos as informações
	std::cout << "Deseja exibir, no final, todas as informações dos jogadores? (S/N) > ";
	std::getline(std::cin, res);
	printJog = validRes(res, true);

	// iniciando os processos
	carregar_jogadores(numJogador, printJog);
	return ;
}

// func para começar, usando respostas passadas como argumentos
void	fast_start( char **av ) {
	bool		printJog = false;
	std::string	printJogStr(av[2]);
	int			numJogador = (std::string(av[1]) == "1") ? 1 : 2;

	printJog = validRes(printJogStr, false);
	carregar_jogadores(numJogador, printJog);
	return ;
}

// =========================== main func ===========================

int		main( int ac, char **av ) {
	if (ac != 3)
		low_start();
	else
		fast_start(av);
	std::cout << std::endl;
	return (0);
}
