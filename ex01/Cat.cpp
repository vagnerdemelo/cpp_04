#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat: Default Constructor called." << '\n';
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat: Copy Constructor called." << '\n';
	this->brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat: Copy Assignment Constructor called." << '\n';

	if (this != &other)
	{
		Animal::operator=(other);
		*this->brain = *other.brain;
	}

	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called." << '\n';
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "Cat: Making the sound of a Cat. MEOW!" << '\n';
}

const Brain* Cat::getBrain() const
{
    return this->brain;
}
