#ifndef HEADER_H
#define HEADER_H

#include <string> // function(s) para...
#include <cstring> // trabalhar com strings
#include <fstream> // fstream lib (para trabalhar com files)
#include <iostream> // iostream lib (claro como a água)

// my function(s)
bool	workingMyFile(std::string filename, std::string findStr, std::string replaceStr);

bool	readMyFile(std::ifstream& fileIn, std::string& allLines, std::string findStr, std::string replaceStr);

#endif
