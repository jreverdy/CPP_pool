#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Default constructor called from Dog" << std::endl;
}

Dog::Dog(std::string str)
{
    _type = str;
}

Dog & Dog::operator=(const Dog &rhs)
{
    _type = rhs._type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor called from Dog" << std::endl;
}

void Dog::makeSound()const
{
    std::cout << "Wouf" << std::endl;
}