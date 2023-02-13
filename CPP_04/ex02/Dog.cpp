#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    _dogBrain = new Brain();
    std::cout << "Default constructor called from Dog" << std::endl;
}

Dog::Dog(const Dog &rhs) : AAnimal::AAnimal(rhs.getType()), _dogBrain(new Brain(rhs.getBrain()))
{
    std::cout << "Copy constructor called from Dog" << std::endl;
    *this = rhs;
}

Dog & Dog::operator=(const Dog &rhs)
{
    std::cout << "Copy assignement operator called from Dog" << std::endl;
    _type = rhs._type;
    _dogBrain = new Brain(rhs.getBrain());
    return (*this);
}

Dog::~Dog()
{
    delete _dogBrain;
    std::cout << "Destructor called from Dog" << std::endl;
}

Brain &Dog::getBrain() const
{
    return(*_dogBrain);
}


void Dog::makeSound()
{
    std::cout << "Wouf" << std::endl;
}