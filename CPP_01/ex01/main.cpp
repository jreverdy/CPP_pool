#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	Zombie *inst_ptr;

	inst_ptr = zombieHorde(10, "Harry");
	delete [] inst_ptr;
}