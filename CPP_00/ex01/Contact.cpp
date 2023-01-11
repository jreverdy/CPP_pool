#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string Contact::get_phone_number(void)
{
	return(this->_phone_number);
}

std::string Contact::get_darkest_secret(void)
{
	return(this->_darkest_secret);
}

std::string Contact::get_input(void)
{
	std::string str;

	if (!std::getline(std::cin, str))
		exit(1);
	return (str);
}

void Contact::set_info(void)
{
	std::cout << "First name : ";
	this->_first_name = get_input();
	std::cout << "Last name : ";
	this->_last_name = get_input();
	std::cout << "Nickname : ";
	this->_nickname = get_input();
	std::cout << "Phone number : ";
	this->_phone_number = get_input();
	std::cout << "Darkest secret : ";
	this->_darkest_secret = get_input();
}

void Contact::print_info(void)
{
	std::cout << this->_first_name << std::endl;
	std::cout << this->_last_name << std::endl;
	std::cout << this->_nickname << std::endl;
	std::cout << this->_phone_number << std::endl;
	std::cout << this->_darkest_secret << std::endl;
}
