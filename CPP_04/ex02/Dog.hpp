#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:

    Brain *_dogBrain;

public:

    Dog();
    Dog(const Dog &rhs);
    Dog &operator=(const Dog &rhs);
    ~Dog();

    Brain       &getBrain(void)const;
    void        makeSound();
};

#endif