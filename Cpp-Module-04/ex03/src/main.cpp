#include "Ice.hpp"
#include "Cure.hpp"
#include "colors.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void	teste01( void ) {
	std::cout << "\n" << REDD << std::string(4, '=') << "  Teste 01: Subjet Test " << std::string(4, '=') << WHIT << "\n\n";

	AMateria*	ice = new Ice();
	AMateria*	cure = new Cure();
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(ice);
	src->learnMateria(cure);

	std::cout << std::endl;
	ICharacter*	me = new Character("me");

	AMateria*	tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl;
	ICharacter*	bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl;
	delete me;
	delete bob;
	delete src;
	delete ice;
	delete cure;

	std::cout << std::endl;
	return ;
}

void	teste02( void ) {
	std::cout << "\n" << REDD << std::string(4, '=') << "  Teste 02: Testando a Matéria, os Personagens e suas interações " << std::string(4, '=') << WHIT << "\n\n";

	Ice*			gelo = new Ice();
	Cure*			cura = new Cure();
	AMateria*		tmpMateria = NULL;
	ICharacter*		biva = new Character("biva");
	ICharacter*		elian = new Character("Elian");
	IMateriaSource*	srcMaterias = new MateriaSource();

	srcMaterias->learnMateria(gelo);
	srcMaterias->learnMateria(cura);
	std::cout << std::endl;

	biva->equip(tmpMateria);
	tmpMateria = srcMaterias->createMateria("fire");
	biva->equip(tmpMateria);

	for(int i = 0; i < 4; i++) {
		tmpMateria = srcMaterias->createMateria("cure");
		biva->equip(tmpMateria);
	}

	tmpMateria = srcMaterias->createMateria("ice");
	biva->equip(tmpMateria);
	delete tmpMateria;

	std::cout << std::endl;
	for(int i = 0; i < 4; i++) {
		tmpMateria = srcMaterias->createMateria("ice");
		elian->equip(tmpMateria);
	}

	tmpMateria = srcMaterias->createMateria("cure");
	elian->equip(tmpMateria);

	std::cout << std::endl << CYAN << biva->getName() << WHIT << " atacando:\n";
	biva->use(0, *elian);
	biva->use(1, *elian);
	biva->use(2, *elian);
	biva->use(3, *elian);
	biva->use(4, *elian);

	std::cout << std::endl << CYAN << elian->getName() << WHIT << " atacando:\n";
	elian->use(0, *biva);
	elian->use(1, *biva);
	elian->use(2, *biva);
	elian->use(3, *biva);
	elian->use(4, *biva);

	std::cout << std::endl;
	delete gelo;
	delete cura;
	delete biva;
	delete elian;
	delete tmpMateria;
	delete srcMaterias;

	std::cout << std::endl;
	return ;
}

void	teste03( void ) {
	std::cout << "\n" << REDD << std::string(4, '=') << "  Teste 03: Testando o Inventário de Equipados e o Inventário de Desenquipados (Chão) " << std::string(4, '=') << WHIT << "\n\n";

	Ice*		gelo = new Ice();
	Cure*		cura = new Cure();
	Character*	elian = new Character("Elian");

	std::cout << std::endl;
	for(int i = 0; i < 4; i++) {
		elian->showInventory(i);
		elian->equip(gelo->clone());
	}
	elian->showInventory(-1);

	for (int i = 0; i < 4; i++) {
		elian->showUnequipInventory(i);
		elian->unequip(i);
	}
	elian->showUnequipInventory(-1);

	elian->showInventory(-1);
	for(int i = 0; i < 4; i++)
		elian->equip(cura->clone());
	elian->showInventory(-1);

	for (int i = 0; i < 4; i++)
		elian->unequip(i);
	elian->showUnequipInventory(-1);

	for(int i = 0; i < 4; i++)
		elian->equip(gelo->clone());
	elian->showInventory(-1);

	for (int i = 0; i < 2; i++)
		elian->unequip(i);
	elian->showUnequipInventory(-1);

	elian->equip(gelo->clone());
	elian->showInventory(-1);

	std::cout << REDD << std::string(4, '-') << "> Testando a primeira quebra do tamanho do Desenquipados <" << std::string(4, '-') << WHIT << "\n";

	for (int i = 0; i < 4; i++)
		elian->unequip(i);
	elian->showUnequipInventory(-1);

	for(int i = 0; i < 4; i++)
		elian->equip(cura->clone());
	elian->showInventory(-1);

	for (int i = 0; i < 4; i++)
		elian->unequip(i);
	elian->showUnequipInventory(-1);

	for(int i = 0; i < 4; i++)
		elian->equip(gelo->clone());
	elian->showInventory(-1);

	for (int i = 0; i < 3; i++)
		elian->unequip(i);
	elian->showUnequipInventory(-1);

	std::cout << REDD << std::string(4, '-') << "> Testando a segunda quebra do tamanho do Desenquipados <" << std::string(4, '-') << WHIT;

	elian->showInventory(-1);
	elian->unequip(3);
	elian->showUnequipInventory(-1);

	delete gelo;
	delete cura;
	delete elian;

	std::cout << std::endl;
	return ;
}

void	teste04( void ) {
	std::cout << "\n" << REDD << std::string(4, '=') << " Teste 04: Inventário de Desenquipados Compartilhado (Chão) " << std::string(4, '=') << WHIT << "\n";
	Character::showUnequipInventory(0);

	Ice*		gelo = new Ice();
	Cure*		cura = new Cure();
	Character*	biva = new Character("Biva");
	Character*	elian = new Character("Elian");

	std::cout << std::endl;
	biva->equip(gelo->clone());
	biva->equip(cura->clone());
	biva->equip(gelo->clone());
	biva->showInventory(-1);

	biva->unequip(0);
	biva->unequip(1);
	biva->showInventory(-1);
	biva->showUnequipInventory(-1);

	std::cout << std::endl;
	AMateria*	materiaDoChao = Character::getUnequipMateria(0);
	elian->equip(materiaDoChao);
	elian->showInventory(-1);

	elian->showUnequipInventory(-1);
	elian->showUnequipInventory(0);
	elian->use(0, *biva);

	std::cout << std::endl;
	delete gelo;
	delete cura;
	delete biva;
	delete elian;

	Character::showUnequipInventory(0);
	return ;
}

void	teste05( void ) {
	std::cout << "\n" << REDD << std::string(4, '=') << " Teste 05: Teste Generico com Fluxo Normal " << std::string(4, '=') << WHIT << "\n\n";

	Ice*		gelo = new Ice();
	Cure*		cura = new Cure();
	AMateria*	tmMateria = gelo->clone();
	Character*	biva = new Character("Biva");
	Character*	elian = new Character("Elian");

	std::cout << std::endl;
	biva->equip(gelo->clone());
	biva->equip(cura->clone());
	biva->equip(gelo->clone());
	biva->equip(cura->clone());
	biva->equip(tmMateria);

	std::cout << std::endl;
	elian->equip(cura->clone());
	elian->equip(gelo->clone());
	elian->equip(cura->clone());
	elian->equip(gelo->clone());
	elian->equip(tmMateria);

	std::cout << std::endl;
	biva->use(0, *elian);
	elian->use(0, *biva);

	std::cout << std::endl;
	biva->unequip(-1);
	elian->unequip(10);

	Character::showUnequipInventory(-1);
	biva->unequip(3);
	biva->unequip(2);
	biva->unequip(1);
	elian->unequip(3);
	elian->unequip(2);

	Character::showUnequipInventory(-1);
	biva->unequip(1);
	elian->unequip(1);
	Character::showUnequipInventory(-1);

	delete gelo;
	delete cura;
	delete biva;
	delete elian;
	delete tmMateria;

	std::cout << std::endl;
	return ;
}

void teste06 () {
	Ice*			gelo = new Ice();
	Cure*			cura = new Cure();
	AMateria*		tmpMateria = NULL;
	ICharacter*		biva = new Character("biva");
	ICharacter*		elian = new Character("Elian");
	IMateriaSource*	srcMaterias = new MateriaSource();

	srcMaterias->learnMateria (cura);
	tmpMateria = srcMaterias->createMateria ("cure");
	
	elian->equip (tmpMateria);
	elian->use (1, *biva);
	elian->unequip (0);
	Character::showUnequipInventory(-1);
	biva->equip (Character::getUnequipMateria(0));
	Character::showUnequipInventory(-1);

	delete gelo;
	delete cura;
	delete biva;
	delete elian;
	delete srcMaterias;
}

int		main( void ) {
	teste01();
	teste02();
	teste03();
    teste04();
	teste05();
	teste06();
    return (0);
}
