#include "header.h"

// responsavel pela criação do novo arquivo com as alterações
static bool	newFile(std::string filename, std::string allLines) {
	// Cria o novo arquivo
	std::ofstream fileOut ((filename + ".replace").c_str());

	// Retorno falso caso não possivel criar o arquivo de saída
	if (!fileOut.is_open()) {
		std::cout << "\n[ERRO] Falha ao criar o arquivo de saída!\n";
		return (false);
	}

	// Adiciona o conteudo de allLines ao arquivo
	fileOut << allLines;

	// Retorno falso caso não seja possível editar o arquivo criado
	if (fileOut.fail()) {
		std::cout << "\n[ERRO] Falha ao escrever no arquivo de saída!\n";
		fileOut.close();
		return (false);
	}

	// Fecha o arquivo em caso de sucesso
	fileOut.close();

	// Emitindo status de sucesso
	std::cout << "\n[SUCESSO] Arquivo de saída criado!\n";
	return (true);
}

// responsavel pelo trabalho envolvendo o file
bool	workingMyFile(std::string filename, std::string findStr, std::string replaceStr) {
	// my essecial var(s)
	std::string		allLines;
	std::ifstream	fileIn (filename.c_str()); // my file var

	// se o file não for aberto na boa, paramos tudo
	if (!fileIn.is_open()) {
		std::cout << "\n[ERRO] Falha ao abrir o arquivo de entrada!\n";
		return (false);
	}

	// lendo o arquivo e fazendo as alterações
	if (!readMyFile(fileIn, allLines, findStr, replaceStr)) {
		fileIn.close(); // fechando o file
		return (false);
	}

	// fechando o file
	fileIn.close();

	// Criando o novo arquivo com as alterações
	if (!newFile(filename, allLines)) {
		return (false);
	}

	// retornando apenas
	return (true);
}
