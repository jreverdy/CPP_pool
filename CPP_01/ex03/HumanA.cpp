#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon inst)
{
	this->_name = name;
	this->_HumanA_weapon = inst.getType();
}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_HumanA_weapon << std::endl;
}