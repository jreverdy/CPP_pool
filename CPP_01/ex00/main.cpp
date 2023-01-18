#include "Zombie.hpp"

int main()
{
	Zombie inst;
	Zombie *inst_ptr;

	inst.announce();
	inst_ptr = inst.newZombie("Jim");
	inst_ptr->announce();
	inst.randomChump("Willy");
	delete inst_ptr;
}
