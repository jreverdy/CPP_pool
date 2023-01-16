#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{

}

void 	HumanB::setWeapon(Weapon inst)
{
	this->_HumanB_weapon = inst.getType();
}

void	HumanB::attack()
{
	if (!this->_HumanB_weapon.empty())
		std::cout << this->_name << " attacks with their " << this->_HumanB_weapon << std::endl;
}