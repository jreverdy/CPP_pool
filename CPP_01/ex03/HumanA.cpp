#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &inst): _HumanA_weapon (inst)
{
	this->_name = name;
}

HumanA::~HumanA()
{

}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << _HumanA_weapon.getType() << std::endl;
}
