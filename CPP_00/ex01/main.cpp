#include <iostream>
#include "Contact.hpp"
#include "Phonebook.hpp"



int main ()
{
	std::string buff;
	Phonebook inst;
	Contact c;
	inst.set_index();
	while(true)
	{
		if (!std::getline(std::cin, buff))
			exit(1);
		if (buff == "ADD")
		{
			inst.add_contact();
		}

		else if (buff == "SEARCH")
			inst.search_contact();
		else if (buff == "EXIT")
			exit(EXIT_SUCCESS);
	}
}
