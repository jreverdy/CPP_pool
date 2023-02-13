#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class  AAnimal
{
protected:

    std::string _type;

public:

    //canonical class form
    AAnimal();
    AAnimal(std::string str);
    AAnimal(const AAnimal &rhs);
    AAnimal &operator=(const AAnimal &rhs);
    virtual ~AAnimal();

    virtual std::string getType() const;
    virtual void        makeSound() = 0;
};

#endif
