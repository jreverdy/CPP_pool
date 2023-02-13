#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:

    Brain *_dogBrain;

public:

    Dog();
    Dog(const Dog &rhs);
    Dog &operator=(const Dog &rhs);
    ~Dog();

    Brain       &getBrain(void)const;
    void        makeSound()const;
};

#endif