#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	std::cout << "======TEST SUBJECT=====" << '\n';
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "\n======TEST WRONG=====" << '\n';
	const WrongAnimal* meta2 = new WrongAnimal();
	WrongCat wrongCat;
	const WrongAnimal* a = &wrongCat;
	std::cout << a->getType() << " " << std::endl;
	meta2->makeSound();
	a->makeSound();

	std::cout << "\n======DESTRUCTOR ORDER=====" << '\n';
	delete meta;
	delete j;
	delete i;
	delete meta2;

	return 0;
}
