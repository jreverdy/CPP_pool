#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor called from Brain" << std::endl;
}

Brain::Brain(const Brain &rhs)
{
    std::cout << "Copy constructor called from Brain" <<  std::endl;
    *this = rhs;
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Copy assignement operator called from Brain" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = rhs._ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor called from Brain" << std::endl;
}

void        Brain::setIdea(std::string idea, int nb)
{
    if (nb >= 100)
        std::cout << "You cannot add more than 100 ideas in this brain" << std::endl;
    else if (nb < 0)
        std::cout << "You cannot have a negative number of ideas" << std::endl;
    else
        _ideas[nb] = idea;
}

std::string Brain::getIdea(size_t nb)
{
    if (nb >= 100)
    {
        std::cout << "You cannot add more than 100 ideas !!!";
        return ("");
    }
    return (_ideas[nb]);
}