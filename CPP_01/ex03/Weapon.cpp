#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_name)
{
	this->_type = weapon_name;
}

Weapon::~Weapon()
{

}

const std::string &Weapon::getType()const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
