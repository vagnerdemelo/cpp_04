#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain: Default constructor called" << '\n';
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain: Copy constructor called" << '\n';

}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain: Copy assignment constructor called" << '\n';
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << '\n';
}
