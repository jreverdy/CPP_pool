#include "Animal.hpp"

Animal::Animal()
{
    _type = "Animal";
    std::cout << "Default constructor called from Animal" << std::endl;
}

Animal::Animal(const Animal &rhs)
{
    std::cout << "Copy constructor called from Animal" << std::endl;
    *this = rhs;
}

Animal::Animal(std::string str)
{
    _type = str;
}

Animal & Animal::operator=(const Animal &rhs)
{
    std::cout << "Copy assignement operator called from Animal" << std::endl;
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