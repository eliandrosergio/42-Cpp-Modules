#ifndef FUNCS_HPP
#define FUNCS_HPP

#include "A.hpp" // inc da variant A da Base
#include "B.hpp" // inc da variant B da Base
#include "C.hpp" // inc da variant C da Base
#include <stdlib.h> // para usar o rand e o srand

// Instancia A, B ou C aleatoriamente e retorna a instância como um ponteiro Base. Sinta-se à vontade para usar o que quiser para a implementação da escolha aleatória.
Base * generate(void);

// Ele imprime o tipo real do objeto apontado por p: "A", "B" ou "C".
void identify(Base* p);

// Ela imprime o tipo real do objeto referenciado por p: "A", "B" ou "C". É proibido usar um ponteiro dentro desta função.
void identify(Base& p);

#endif
