#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(int ac, char **av)
{
	if (ac != 3 || !std::atoi(av[1]))
	{
		std::cerr << "Usage: ./zombie [Number of zombies] [Name]";
		std::cerr << std::endl;
		return (EXIT_FAILURE);
	}

	Zombie *inst_ptr;

	inst_ptr = zombieHorde(std::atoi(av[1]), av[2]);
	delete [] inst_ptr;
	return (EXIT_SUCCESS);
}
