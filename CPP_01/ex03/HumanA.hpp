#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:

	Weapon	&_HumanA_weapon;
	std::string	_name;

public:

	HumanA(std::string name, Weapon &inst);
	~HumanA();

	void	attack();
};

#endif