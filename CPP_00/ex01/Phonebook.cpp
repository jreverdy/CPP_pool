#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	this->_nb_contact = 0;
}

Phonebook::~Phonebook(void)
{
}

int	Phonebook::get_index(void)
{
	return (this->_index);
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
	if (_nb_contact < 8)
		this->_nb_contact++;
}

void 	Phonebook::print_contact(int index)
{
	std::cout << "First name : " << _my_contact[index].get_first_name() << std::endl;
	std::cout << "Last name : " << _my_contact[index].get_last_name() << std::endl;
	std::cout << "Nickname : " << _my_contact[index].get_nickname() << std::endl;
	std::cout << "Phone number : " << _my_contact[index].get_phone_number() << std::endl;
	std::cout << "Darkest secret : " << _my_contact[index].get_darkest_secret() << std::endl;
}


void 	Phonebook::search_contact(void)
{
	int			i = 0;
	int 		nb;
	std::string	str;

	if (this->_nb_contact == 0)
	{
		std::cout << "Please add a contact if you want to find one" << std::endl;
		return ;
	}
	while (i < this->_nb_contact)
	{
		this->_my_contact[i].print_info(i + 1);
		i++;
	}
	std::cout << std::endl << "Index : ";
	if (!std::getline(std::cin, str))
		exit(1);
	nb = std::atoi(str.c_str());
	if (nb > _nb_contact || nb < 1 || nb > 8)
	{
		std::cout << "Invalid index, please try another one" << std::endl;
		search_contact();
	}
	else
		print_contact(nb - 1);
}
