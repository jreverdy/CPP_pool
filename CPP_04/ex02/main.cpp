#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "-------------Show Abstact class-------------" << std::endl;
    {
        //AAnimal animal;
        Dog Doggo;
        Cat Miaous;

        //animal.makesound();
        Doggo.makeSound();
        Miaous.makeSound();
    }
    std::cout << std::endl;
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
