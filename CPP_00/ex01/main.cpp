#include <iostream>
#include "Contact.hpp"
#include "Phonebook.hpp"

void print_welcome()
{
	std::cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "|         Welcome to Phonebook          |" << std::endl;
	std::cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << std::endl;
	std::cout << "In order to use this device, you have 3 options" << std::endl;
	std::cout << "- ADD: add a new contact" << std::endl << \
	             "- SEARCH: show requested contact" << std::endl << \
				 "- EXIT: exit the program" << std::endl;
}

int main ()
{
	std::string buff;
	Phonebook 	inst;
	Contact 	c;

	print_welcome();
	while(true)
	{
		if (!std::getline(std::cin, buff))
			exit(1);
		if (buff == "ADD")
			inst.add_contact();
		else if (buff == "SEARCH")
			inst.search_contact();
		else if (buff == "EXIT")
		{
			std::cout << "See you soon !" << std::endl;
			exit(EXIT_SUCCESS);
		}
		else
			if (!buff.empty())
				std::cout << "Wrong input, please enter ADD, SEARCH or EXIT" << std::endl;
	}
}
