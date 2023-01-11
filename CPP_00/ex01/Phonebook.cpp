#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{

}

Phonebook::~Phonebook(void)
{

}

int	Phonebook::get_index(void)
{
	return (this->_index);
}

void 	Phonebook::set_index(void)
{
	this->_index = 0;
}


void	Phonebook::add_contact(void)
{
	Contact instance;
	if (this->_index == 8)
	{
		this->_my_contact[0].set_info();
		this->_index = 0;
	}
	else
		this->_my_contact[_index].set_info();
	this->_index++;
}

void 	Phonebook::search_contact(void)
{
	int i = 0;
	int nb = 0;
	std::string str;

	while (i < this->_index)
	{
		_my_contact[i].print_info();
		std::cout << std::endl;
		i++;
	}
	std::cout << "Index : ";
	if (!std::getline(std::cin, str))
		exit(1);
	nb = stoi(str);
	_my_contact[nb - 1].print_info();
}