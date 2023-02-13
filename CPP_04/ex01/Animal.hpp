#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class  Animal
{
protected:

    std::string _type;

public:

    //canonical class form
    Animal();
    Animal(std::string str);
    Animal(const Animal &rhs);
    Animal &operator=(const Animal &rhs);
    virtual ~Animal();

    virtual std::string getType() const;
    virtual void        makeSound() const;
};

#endif