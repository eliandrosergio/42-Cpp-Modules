#ifndef DATA_HPP
#define DATA_HPP

#include "string"
#include "iostream"

// Uma estrutura básica com alguns dados de um jogador em um jogo.
struct	Data {
	std::string		nome;
	char			sexo;
	int				nivel;
	float			pontos;
	double			dinheiro;
};

#endif
