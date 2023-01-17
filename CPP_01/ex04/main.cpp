#include <iostream>
#include <fstream>
#include <filesystem>

void	ft_replace(std::string File_name, std::string s1, std::string s2)
{
	std::ifstream ifs(File_name);

}

int main(int ac, char **av)
{
	if (ac == 4)
		ft_replace(av[1], av[2], av[3]);
	else
		std::cerr << "Input invalid" << std::endl;
}


//	std::ifstream ifs("integer");
//	unsigned int dst = 8;
//	unsigned int dst2 = 16;
//	ifs >> dst >> dst2;
//
//	std::cout << dst << " " << dst2 << std::endl;
//	ifs.close();