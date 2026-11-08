#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Default Constructor called." << '\n';
	this->type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat: Copy Constructor called." << '\n';
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat: Copy Assignment Constructor called." << '\n';

	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called." << '\n';
}

void Cat::makeSound() const
{
	std::cout << "Cat: Making the sound of a Cat. MEOW!" << '\n';
}
