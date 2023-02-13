#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Default constructor called from Cat" << std::endl;
}

Cat::Cat(std::string str)
{
    _type = str;
}

Cat & Cat::operator=(const Cat &rhs)
{
    _type = rhs._type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor called from Cat" << std::endl;
}

void Cat::makeSound()const
{
    std::cout << "Miaou" << std::endl;
}