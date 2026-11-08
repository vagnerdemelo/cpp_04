#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "\n=== TEST 1: ANIMAL ARRAY ===\n";

	// Animal teste;

    const int size = 10;
    Animal *animals[size];

    for (int i = 0; i < size; i++)
    {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n=== ANIMAL SOUNDS ===\n";

    for (int i = 0; i < size; i++)
        animals[i]->makeSound();

    std::cout << "\n=== DELETING ANIMALS ===\n";

    for (int i = 0; i < size; i++)
        delete animals[i];


    std::cout << "\n=== TEST 2: DOG DEEP COPY ===\n";

    Dog dog1;
    Dog dog2(dog1);

    // std::cout << "Dog 1 Brain: " << dog1.getBrain() << '\n';
    // std::cout << "Dog 2 Brain: " << dog2.getBrain() << '\n';


    std::cout << "\n=== TEST 3: DOG ASSIGNMENT ===\n";

    Dog dog3;
    dog3 = dog1;

    // std::cout << "Dog 1 Brain: " << dog1.getBrain() << '\n';
    // std::cout << "Dog 3 Brain: " << dog3.getBrain() << '\n';


    std::cout << "\n=== TEST 4: CAT DEEP COPY ===\n";

    Cat cat1;
    Cat cat2(cat1);

    // std::cout << "Cat 1 Brain: " << cat1.getBrain() << '\n';
    // std::cout << "Cat 2 Brain: " << cat2.getBrain() << '\n';


    std::cout << "\n=== TEST 5: CAT ASSIGNMENT ===\n";

    Cat cat3;
    cat3 = cat1;

    // std::cout << "Cat 1 Brain: " << cat1.getBrain() << '\n';
    // std::cout << "Cat 3 Brain: " << cat3.getBrain() << '\n';

	std::cout << "\n=== TEST 6: DEEP COPY WITH INNER SCOPE ===\n";

	Dog basic;
	{
		Dog tmp = basic;
		std::cout << "Leaving inner scope...\n";
	}

	std::cout << "Original Dog is still alive.\n";
	basic.makeSound();

    std::cout << "\n=== END OF TESTS ===\n";

    return 0;
}
