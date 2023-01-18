#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl inst;

	if (ac != 2)
	{
		std::cerr << "Usage: ./Harl [level of complaint]" << std::endl ;
		std::cerr << std::endl;
		std::cerr << "Level of complaint possible: " << std::endl;
		std::cerr << " - DEBUG" << std::endl;
		std::cerr << " - INFO" << std::endl;
		std::cerr << " - WARNING" << std::endl;
		std::cerr << " - ERROR" << std::endl;
		return (EXIT_FAILURE);
	}
	inst.complain(av[1]);
	return (EXIT_SUCCESS);
}
