#include "Serializer.hpp"
#include <iomanip> // para usar o std::setprecision

// =========================== utils funcs ===========================

void	print_jogador( const Data *newJog, const Data *oldJog ) {
	std::cout << std::fixed << std::setprecision(2);
	std::cout <<
	std::endl << "Nome [novo   jogador]: " << newJog->nome <<
	std::endl << "Nome [antigo jogador]: " << oldJog->nome <<
	std::endl << "Sexo [novo   jogador]: " << newJog->sexo <<
	std::endl << "Sexo [antigo jogador]: " << oldJog->sexo <<
	std::endl << "Nível [novo   jogador]: " << newJog->nivel <<
	std::endl << "Nível [antigo jogador]: " << newJog->nivel <<
	std::endl << "Pontos [novo   jogador]: " << newJog->pontos <<
	std::endl << "Pontos [antigo jogador]: " << newJog->pontos <<
	std::endl << "Dinheiro [novo   jogador]: " << newJog->dinheiro <<
	std::endl << "Dinheiro [antigo jogador]: " << newJog->dinheiro <<
	std::endl;
	return ;
}

void	print_values( const Data *newJog, const Data* oldJog, const bool &printJog ) {
	std::string	str1 = "\n\"" + newJog->nome + "\" [novo jogador] [",
	str2 = "	" +  (newJog == oldJog) ? "é exatamente" : "não é",
	str3 = "\"" + oldJog->nome + "\" [antigo jogador] [";

	std::cout << str1 << &newJog << "] [" << newJog << "]" << std::endl << str2 << " igual à " <<
	std::endl << str3 << &oldJog << "] [" << oldJog << "]" << std::endl;
	if (printJog)
		print_jogador(newJog, oldJog);
	return ;
}

Data	*iniciar_jogador( const std::string &nome, const char &sexo, const int &nivel, const float &pontos, const double &dinheiro ) {
	Data	*jogador = new Data();
	
	jogador->nome = nome;
	jogador->sexo = sexo;
	jogador->nivel = nivel;
	jogador->pontos = pontos;
	jogador->dinheiro = dinheiro;
	return (jogador);
}

// =========================== carregar funcs ===========================

void	carregar_jogadores( const int &numJog, const bool &printJog ) {
	// as var(s)
	Data	*eliandro = NULL, *laraJean = NULL,
	*newEliandro = NULL, *newLaraJean = NULL;

	// processo do eliandro
	eliandro = iniciar_jogador("Eliandro Faustino", 'M', 4, 44.56f, 3200.500);
	newEliandro = Serializer::deserialize(Serializer::serialize(eliandro));
	print_values(newEliandro, eliandro, printJog);
	delete eliandro;

	// processo da laraJean
	if (numJog == 2) {
		laraJean = iniciar_jogador("Lara Clover", 'F', 8, 88.24f, 5450.00);
		newLaraJean = Serializer::deserialize(Serializer::serialize(laraJean));
		print_values(newLaraJean, laraJean, printJog);
		delete laraJean;
	}
	return ;
}
