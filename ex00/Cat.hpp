#ifndef CAT_HPP
#define CAT_HPP

#include <string.h>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();
};

#endif
