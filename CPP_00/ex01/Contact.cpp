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

std::string Contact::get_input(std::string str)
{
	std::string input;

	std::cout << str;
	if (!std::getline(std::cin, input))
		exit(1);
	while (input.empty())
		input = get_input(str);
	return (input);
}

void Contact::set_info(void)
{
	this->_first_name = get_input("First name :");
	this->_last_name = get_input("Last name : ");
	this->_nickname = get_input("Nickname : ");
	this->_phone_number = get_input("Phone number : ");
	this->_darkest_secret = get_input("Darkest secret : ");
}

std::string Contact::trim_info(std::string input)
{
	std::string str;

	str = input.substr(0, 9);
	str.push_back('.');
	std::cout << std::setw(10) << str << "|";
	return (str);
}

void Contact::print_info(int nb)
{
	std::cout << " -----------------------------------------------" << std::endl;
	std::cout << "| " << nb << " |" ;
	if (this->_first_name.size() >= 10)
		trim_info(this->_first_name);
	else
		std::cout << std::setw(10) << this->_first_name << "|";
	if (this->_last_name.size() >= 10)
		trim_info(this->_last_name);
	else
		std::cout << std::setw(10) << this->_last_name << "|";
	if (this->_nickname.size() >= 10)
		trim_info(this->_nickname);
	else
		std::cout << std::setw(10) << this->_nickname << "|";
	if (this->_phone_number.size() >= 10)
		trim_info(this->_phone_number);
	else
		std::cout << std::setw(10) << this->_phone_number << "|" << std::endl;
}
