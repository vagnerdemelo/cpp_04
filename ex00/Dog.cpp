#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Default Constructor called." << '\n';
	this->type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog: Copy Constructor called." << '\n';
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog: Copy Assignment Constructor called." << '\n';

	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called." << '\n';
}

void Dog::makeSound() const
{
	std::cout << "Dog: Making the sound of a Dog. WOOF-WOOF!" << '\n';
}
