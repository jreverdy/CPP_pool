#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    _catBrain = new Brain();
    std::cout << "Default constructor called from Cat" << std::endl;
}

Cat::Cat(const Cat &rhs) : Animal::Animal(rhs.getType()), _catBrain(new Brain(rhs.getBrain()))
{
    std::cout << "Copy constructor called from Cat" << std::endl;
    *this = rhs;
}

Cat & Cat::operator=(const Cat &rhs)
{
    std::cout << "Copy assignement operator called from Cat" << std::endl;
    _type = rhs._type;
    _catBrain = new Brain(rhs.getBrain());
    return (*this);
}

Cat::~Cat()
{
    delete _catBrain;
    std::cout << "Destructor called from Cat" << std::endl;
}

Brain &Cat::getBrain() const
{
    return(*_catBrain);
}

void Cat::makeSound()const
{
    std::cout << "Miaou" << std::endl;
}