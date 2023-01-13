#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "Bob";
}

Zombie::~Zombie()
{
	std::cout << this->_name <<  " died in terrible pain" << std::endl;
}

std::string	Zombie::get_name()
{
	return (this->_name);
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}