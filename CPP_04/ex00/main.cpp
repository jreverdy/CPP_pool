#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound(); //will output the dog sound!
        meta->makeSound();
        delete(meta);
        delete(j);
        delete(i);
    }
    std::cout << std::endl;
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();
        std::cout << i->getType() << " " << std::endl;
        std::cout << "from WrongCat: ";
        i->makeSound(); //will output the cat sound!
        std::cout << "from WrongAnimal: ";
        meta->makeSound();
        delete(meta);
        delete(i);
    }
    return (0);
}