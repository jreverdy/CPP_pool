#include "Animal.hpp"

AAnimal::AAnimal()
{
    _type = "Animal";
    std::cout << "Default constructor called from Animal" << std::endl;
}

AAnimal::AAnimal(const AAnimal &rhs)
{
    std::cout << "Copy constructor called from Animal" << std::endl;
    *this = rhs;
}

AAnimal::AAnimal(std::string str)
{
    _type = str;
}

AAnimal & AAnimal::operator=(const AAnimal &rhs)
{
    std::cout << "Copy assignement operator called from Animal" << std::endl;
    _type = rhs._type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "Destructor called from Animal" << std::endl;
}

std::string AAnimal::getType()const
{
    return (this->_type);
}
