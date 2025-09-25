#include "funcs.hpp"

Base * generate(void) {
	srand((unsigned int)time(NULL));
	int		baseID = rand() % 3;
	Base	*basePtr = NULL;

	if (baseID == 0)
		basePtr = new A();
	else if (baseID == 1)
		basePtr = new B();
	else if (baseID == 2)
		basePtr = new C();
	return (basePtr);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	return ;
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch ( std::exception &ex ) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch ( std::exception &ex ) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch ( std::exception &ex ) {}
	return ;
}
