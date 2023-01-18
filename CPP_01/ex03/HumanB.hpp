#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:

	Weapon *_HumanB_weapon;
	std::string	_name;

public:

	HumanB(std::string name);
	~HumanB();

	void 	setWeapon(Weapon &inst);
	void	attack();
};

#endif
