#include "Animal.hpp"

Animal::Animal()
{
    _type = "Animal";
    std::cout << "Default constructor called from Animal" << std::endl;
}

Animal::Animal(std::string str)
{
    _type = str;
}

Animal & Animal::operator=(const Animal &rhs)
{
    _type = rhs._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor called from Animal" << std::endl;
}

std::string Animal::getType()const
{
    return (this->_type);
}

void Animal::makeSound()const
{
    std::cout << "No animal specified" << std::endl;
}