#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
    Animal *tab[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
    {
        tab[i]->makeSound();
        std::cout << std::endl;
        delete tab[i];
        std::cout << std::endl;
    }

    std::cout << std::endl << "-----------Ideas-----------" << std::endl;
    std::cout << std::endl;

    Dog Paul;
    Dog Louis = Paul;
    Cat George;

    George.getBrain().setIdea("I love to sleep", 1);
    George.getBrain().setIdea("I love milk", 99);
    Louis.getBrain().setIdea("I secretly love Paul", 0);
    Paul.getBrain().setIdea("Super bon ce poulet", 55);
    Paul.getBrain().setIdea("wouf wouf", -1);
    Paul.getBrain().setIdea("waf waf", 101);

    std::cout << Louis.getBrain().getIdea(0) << std::endl;
    std::cout << George.getBrain().getIdea(1) << std::endl;
    std::cout << George.getBrain().getIdea(99) << std::endl;
    std::cout << Paul.getBrain().getIdea(55) << std::endl;
    std::cout << Paul.getBrain().getIdea(-1) << std::endl;
    std::cout << Paul.getBrain().getIdea(101) << std::endl;

    std::cout << std::endl;
    std::cout << std::endl << "-----------Deep Copy Test-----------" << std::endl;

    Dog og;
    Dog cpy = og;
    return (0);
}
