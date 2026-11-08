#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat: Default Constructor called." << '\n';
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat: Copy Constructor called." << '\n';
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat: Copy Assignment Constructor called." << '\n';

	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called." << '\n';
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat: Making the sound of a WrongCat. MEOW!" << '\n';
}
