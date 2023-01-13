#include "Zombie.hpp"

void 		Zombie::randomChump( std::string name )
{
	Zombie inst;

	inst._name = name;
	std::cout << inst._name << ": Hello everyone, my name is Willy" << std::endl;
}