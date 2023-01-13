#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
	Zombie *inst;

	inst = new Zombie;
	inst->_name = name;
	return (inst);
}