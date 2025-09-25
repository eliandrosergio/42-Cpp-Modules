#include "Dog.hpp"
#include "Cat.hpp"
#include "colors.hpp"
#include "WrongCat.hpp"

void	tester01( void ) {
	std::cout << "\n" << CYAN << std::string(24, '-') << "> Tester01 <" << std::string(24, '-') << std::endl;
	{
		std::cout << "\n" << GREN << std::string(20, '=') << " Animal Testes " << std::string(20, '=') << std::endl;
		std::cout << "\n" << YELW << "Constructor(s)" << WHIT << std::endl;

		Animal*	animal1 = new Animal();
		Animal	animal2(*animal1);

		std::cout << "\n" << YELW << "Testes" << WHIT << std::endl;
		std::cout << "[Animal1] Type: " << animal1->getType() << "\n";
		std::cout << "[Animal1] Sound: "; animal1->makeSound();
		std::cout << "[Animal2] Type: " << animal2.getType() << "\n";
		std::cout << "[Animal2] Sound: "; animal2.makeSound();

		std::cout << "\n" << YELW << "Destructor(s)" << WHIT << std::endl;
		delete animal1;
	}

	std::cout << std::endl;
	{
		std::cout << "\n" << GREN << std::string(20, '=') << " Cat Testes " << std::string(20, '=') << std::endl;
		std::cout << "\n" << YELW << "Constructor(s)" << WHIT << std::endl;

		Cat*	cat1 = new Cat(); std::cout << std::endl;
		Cat		cat2(*cat1);
	
		std::cout << "\n" << YELW << "Testes" << WHIT << std::endl;
		std::cout << "[Cat1] Type: " << cat1->getType() << "\n";
		std::cout << "[Cat1] Sound: "; cat1->makeSound();
		std::cout << "[Cat2] Type: " << cat2.getType() << "\n";
		std::cout << "[Cat2] Sound: "; cat2.makeSound();

		std::cout << "\n" << YELW << "Destructor(s)" << WHIT << std::endl;
		delete cat1; std::cout << std::endl;
	}

	std::cout << std::endl;
	{
		std::cout << "\n" << GREN << std::string(20, '=') << " Dog Testes " << std::string(20, '=') << std::endl;
		std::cout << "\n" << YELW << "Constructor(s)" << WHIT << std::endl;

		Dog*	dog1 = new Dog(); std::cout << std::endl;
		Dog		dog2(*dog1);

		std::cout << "\n" << YELW << "Testes" << WHIT << std::endl;
		std::cout << "[Dog1] Type: " << dog1->getType() << "\n";
		std::cout << "[Dog1] Sound: "; dog1->makeSound();
		std::cout << "[Dog2] Type: " << dog2.getType() << "\n";
		std::cout << "[Dog2] Sound: "; dog2.makeSound();

		std::cout << "\n" << YELW << "Destructor(s)" << WHIT << std::endl;
		delete dog1; std::cout << std::endl;
	}

	std::cout << std::endl;
	{
		std::cout << "\n" << GREN << std::string(20, '=') << " Animal Ptr Testes " << std::string(20, '=') << std::endl;
		std::cout << "\n" << YELW << "Constructor(s)" << WHIT << std::endl;

		Animal*	myAnimals[3];
		myAnimals[0] = new Animal(); std::cout << std::endl;
		myAnimals[1] = new Dog(); std::cout << std::endl;
		myAnimals[2] = new Cat();

		std::cout << "\n" << YELW << "Testes" << WHIT << std::endl;
		std::cout << "[myAnimals[0]] Type: " << myAnimals[0]->getType() << "\n";
		std::cout << "[myAnimals[0]] Sound: "; myAnimals[0]->makeSound();
		std::cout << "[myAnimals[1]] Type: " << myAnimals[1]->getType() << "\n";
		std::cout << "[myAnimals[1]] Sound: "; myAnimals[1]->makeSound();
		std::cout << "[myAnimals[2]] Type: " << myAnimals[2]->getType() << "\n";
		std::cout << "[myAnimals[2]] Sound: "; myAnimals[2]->makeSound();

		std::cout << "\n" << YELW << "Destructor(s)" << WHIT << std::endl;
		delete myAnimals[0]; std::cout << std::endl;
		delete myAnimals[1]; std::cout << std::endl;
		delete myAnimals[2];
	}

	std::cout << std::endl;
	{
		std::cout << "\n" << GREN << std::string(20, '=') << " WrongAnimal Testes " << std::string(20, '=') << std::endl;
		std::cout << "\n" << YELW << "Constructor(s)" << WHIT << std::endl;

		const WrongAnimal* meta = new WrongAnimal(); std::cout << std::endl;
		const WrongAnimal* i = new WrongCat();

		std::cout << "\n" << YELW << "Testes" << WHIT << std::endl;
		std::cout << "[i] Type: " << i->getType() << std::endl;
		std::cout << "[i] Sound: "; i->makeSound();
		std::cout << "[meta] Type: " << meta->getType() << std::endl;
		std::cout << "[meta] Sound: "; meta->makeSound();

		std::cout << "\n" << YELW << "Destructor(s)" << WHIT << std::endl;
		delete meta;
		delete i;
	}

	std::cout << std::endl;
	{
		std::cout << "\n" << GREN << std::string(20, '=') << " Subject Tester " << std::string(20, '=') << std::endl;
		std::cout << "\n" << YELW << "Constructor(s)" << WHIT << std::endl;

		const Animal* meta = new Animal(); std::cout << std::endl;
		const Animal* j = new Dog(); std::cout << std::endl;
		const Animal* i = new Cat();

		std::cout << "\n" << YELW << "Testes" << WHIT << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		std::cout << "\n" << YELW << "Destructor(s)" << WHIT << std::endl;
		delete meta; std::cout << std::endl;
		delete j; std::cout << std::endl;
		delete i;
	}

	std::cout << std::endl;
	return ;
}

void	tester02( void ) {
	std::cout << "\n\n" << CYAN << std::string(24, '-') << "> Tester02 <" << std::string(24, '-') << std::endl;
	{
		std::cout << "\n" << GREN << std::string(20, '=') << " Cat Brain Testes " << std::string(20, '=') << std::endl;
		std::cout << "\n" << YELW << "Constructor(s)" << WHIT << std::endl;

		Cat*	cat1 = new Cat(); std::cout << std::endl;
		Cat		cat2;
	
		std::cout << "\n" << YELW << "Testes" << WHIT << std::endl;
		cat1->getBrain()->setIdea(0, "Vou dormir aqui um pouco!");
		std::cout << "[cat1] ideia: " << cat1->getBrain()->getIdea(0) << "\n";
		std::cout << "[cat2] ideia: " << cat2.getBrain()->getIdea(0) << "\n\n";
		cat2 = *cat1;
		std::cout << "\n[cat1] ideia: " << cat1->getBrain()->getIdea(0) << "\n";
		std::cout << "[cat2] ideia: " << cat2.getBrain()->getIdea(0) << "\n";
		cat1->getBrain()->setIdea(0, "Acho que vou arranhar o sofá sem motivo!");
		std::cout << "\n[cat1] ideia: " << cat1->getBrain()->getIdea(0) << "\n";
		std::cout << "[cat2] ideia: " << cat2.getBrain()->getIdea(0) << "\n";

		std::cout << "\n" << YELW << "Destructor(s)" << WHIT << std::endl;
		delete cat1;
		std::cout << std::endl;
	}

	std::cout << std::endl;
	{
		std::cout << "\n" << GREN << std::string(20, '=') << " Dog Brain Testes " << std::string(20, '=') << std::endl;
		std::cout << "\n" << YELW << "Constructor(s)" << WHIT << std::endl;

		Dog*	dog1 = new Dog(); std::cout << std::endl;
		Dog		dog2;

		std::cout << "\n" << YELW << "Testes" << WHIT << std::endl;
		dog1->getBrain()->setIdea(0, "Vou morder esse cara!");
		std::cout << "[dog1] ideia: " << dog1->getBrain()->getIdea(0) << "\n";
		std::cout << "[dog2] ideia: " << dog2.getBrain()->getIdea(0) << "\n\n";
		dog2 = *dog1;
		std::cout << "\n[dog1] ideia: " << dog1->getBrain()->getIdea(0) << "\n";
		std::cout << "[dog2] ideia: " << dog2.getBrain()->getIdea(0) << "\n";
		dog1->getBrain()->setIdea(0, "Vou morder esse nigga!");
		std::cout << "\n[dog1] ideia: " << dog1->getBrain()->getIdea(0) << "\n";
		std::cout << "[dog2] ideia: " << dog2.getBrain()->getIdea(0) << "\n";

		std::cout << "\n" << YELW << "Destructor(s)" << WHIT << std::endl;
		delete dog1;
		std::cout << std::endl;
	}

	std::cout << std::endl;
	{
		std::cout << "\n" << GREN << std::string(20, '=') << " Subject Tester " << std::string(20, '=') << std::endl;
		std::cout << "\n" << YELW << "Constructor(s)" << WHIT << std::endl;

		const Animal*	j = new Dog(); std::cout << std::endl;
		const Animal*	i = new Cat();

		std::cout << "\n" << YELW << "Destructor(s)" << WHIT << std::endl;
		delete j;//should not create a leak
		std::cout << std::endl;
		delete i;
	}

	std::cout << std::endl;
	{
		std::cout << "\n" << GREN << std::string(18, '=') << " Array of Animal Objects Tester " << std::string(18, '=') << std::endl;
		Animal*		myAnimals[12];

		std::cout << "\n" << YELW << "Cat(s) Constructor(s)" << WHIT;
		for (int i = 0; i < 6; i++) {
			std::cout << "\n " << i << " | ";
			myAnimals[i] = new Cat();
		}

		std::cout << "\n" << YELW << "Dog(s) Constructor(s)" << WHIT;
		for (int i = 6; i < 12; i++) {
			std::cout << "\n " << i << " | ";
			myAnimals[i] = new Dog();
		}

		std::cout << "\n" << YELW << "Cat(s) Destructor(s)" << WHIT;
		for (int i = 0; i < 12; i++) {
			if (i == 6)
				std::cout << "\n" << YELW << "Dog(s) Destructor(s)" << WHIT;
			std::cout << "\n " << i << " | ";
			delete myAnimals[i];
		}
	}

	std::cout << std::endl;
	return ;
}

void	tester03( void ) {
	std::cout << "\n" << GREN << std::string(18, '=') << " Deep Copy Tester " << std::string(18, '=') << std::endl;
	std::cout << "\n" << YELW << "Constructor(s) basic" << WHIT << std::endl;
	Cat		basicCat;
	Dog		basicDog;

	{
		std::cout << "\n" << YELW << "Constructor(s) tmp" << WHIT << std::endl;
		Cat		tmpCat = basicCat;
		std::cout << std::endl;
		Dog		tmpDog = basicDog;
		std::cout << "\n" << YELW << "Destructor(s) tmp" << WHIT << std::endl;
	}

	std::cout << "\n" << YELW << "Destructor(s) basic" << WHIT << std::endl;
	return ;
}

int		main( void ) {
	tester01();
	tester02();
	tester03();
	return (0);
}
