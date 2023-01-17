#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{

}

void 	HumanB::setWeapon(Weapon &inst)
{
	this->_HumanB_weapon = &inst;
}

void	HumanB::attack()
{
	if (this->_HumanB_weapon)
		std::cout << this->_name << " attacks with their " << this->_HumanB_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their bare hands " << std::endl;
}