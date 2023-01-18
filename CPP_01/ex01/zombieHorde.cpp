#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i = 0;

	Zombie	*inst = new Zombie[N];
	while (i < N)
	{
		inst[i].get_name() = name;
		std::cout << inst[i].get_name() << std::endl;
		i++;
	}
	return (inst);
}
