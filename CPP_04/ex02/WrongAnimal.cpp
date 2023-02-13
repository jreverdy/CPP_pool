#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "WrongAnimal";
    std::cout << "Default constructor called from Animal" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &rhs)
{
    std::cout << "Copy assignement operator called from WrongAnimal" << std::endl;
    _type = rhs._type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor called from WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType()const
{
    return (this->_type);
}

void WrongAnimal::makeSound()const
{
    std::cout << "WrongAnimal sound grrrr" << std::endl;
}