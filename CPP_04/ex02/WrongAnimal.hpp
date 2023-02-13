#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class  WrongAnimal
{
protected:

    std::string _type;

public:

    //canonical class form
    WrongAnimal();
    WrongAnimal(const WrongAnimal &rhs);
    WrongAnimal &operator=(const WrongAnimal &rhs);
    virtual ~WrongAnimal();

    virtual std::string getType() const;
    virtual void        makeSound() const;
};

#endif