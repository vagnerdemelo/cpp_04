#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog: Default Constructor called." << '\n';
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog: Copy Constructor called." << '\n';
	this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog: Copy Assignment Constructor called." << '\n';

	if (this != &other)
	{
		Animal::operator=(other);
		*this->brain = *other.brain;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called." << '\n';
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Dog: Making the sound of a Dog. WOOF-WOOF!" << '\n';
}

// const Brain* Cat::getBrain() const
// {
//     return this->brain;
// }
