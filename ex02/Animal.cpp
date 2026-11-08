#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal: Default Constructor called." << '\n';
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal: Copy Constructor called." << '\n';
	this->type = other.type;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal: Copy Assignment Constructor called." << '\n';

	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called." << '\n';
}

// void Animal::makeSound() const
// {
// 	std::cout << "Animal: Making the sound of an animal." << '\n';
// }

std::string Animal::getType() const
{
	return this->type;
}
