#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "Default constructor called from WrongCat" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &rhs)
{
    std::cout << "Copy assignement operator called from WrongCat" << std::endl;
    _type = rhs._type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor called from WrongCat" << std::endl;
}
