#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Default Constructor called." << '\n';
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal: Copy Constructor called." << '\n';
	this->type = other.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal: Copy Assignment Constructor called." << '\n';

	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called." << '\n';
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal: Making the sound of an animal." << '\n';
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
