#include "header.h"

// responsavel por procurar a string e alterando-a, caso encontre-a
static std::string	findReplace(std::string line, std::string findStr, std::string replaceStr) {
	size_t findStrLen = findStr.size();
	size_t isFind = line.find(findStr);

	// Se a string a ser procurada estiver vazia, retornamos a line original
	if (findStr.empty()) {
		return (line);
	}

	// Enquanto encontrarmos a string na line
	while (isFind != std::string::npos) {		
		// Substituição com substr
		line = line.substr(0, isFind) + replaceStr + line.substr(isFind + findStrLen);
		
		// Procurar a próxima ocorrência, começando depois da substituição
		isFind = line.find(findStr, isFind + replaceStr.size());
	}

	return (line);
}

// responsavel pelo leitura da arquivo, e seu devido tratamento
bool	readMyFile(std::ifstream& fileIn, std::string& allLines, std::string findStr, std::string replaceStr) {
	std::string	line;
	bool		firstLine = true;

	// Lê o resto das linhas, adicionando '\n' antes de cada uma
	while (getline(fileIn, line)) {
		if (firstLine) {
			// Insere a linha em allLines
			allLines += findReplace(line, findStr, replaceStr);
			firstLine = false; // tornando firstLine falso
		} else {
			// Adicionando '\n' antes da linha ao allLines
			allLines += "\n" + findReplace(line, findStr, replaceStr);
		}
	}

	if (fileIn.bad()) {
		std::cerr << "\n[ERRO] Falha ao ler o arquivo de entrada!\n\n";
		return (false);
	}

	// retornando o estado da alteração
	return (true);
}
