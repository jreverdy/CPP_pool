#include <iostream>
#include <fstream>

void	ft_replace(std::string File_name, std::string s1, std::string s2)
{
	std::ifstream 	ifs(File_name);
	if (!ifs.is_open())
	{
		std::cerr << "Infile is not valid" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string		File_name_replace = File_name + ".replace";
	std::ofstream 	ofs(File_name_replace);
	if (!ofs.is_open())
	{
		std::cerr << "Outfile is not valid" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string 	str;
	while (std::getline(ifs, str))
	{
		if (!s1.empty())
		{
			for (size_t i = str.find(s1); i != std::string::npos; i = str.find(s1, i)){
				str.erase(i, s1.length());
				str.insert(i, s2);
				i += s2.size();
			}
		}
		ofs << str;
		if (!ifs.eof())
			ofs << std::endl;
	}
}

int main(int ac, char **av)
{
	if (ac == 4)
		ft_replace(av[1], av[2], av[3]);
	else
	{
		std::cerr << "Usage: ./sed [filename] [string_to_erase] [string_to_insert]"<< std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
