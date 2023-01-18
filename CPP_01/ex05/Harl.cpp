#include "Harl.hpp"

Harl::Harl()
{
	this->_index[0] = "DEBUG";
	this->_index[1] = "INFO";
	this->_index[2] = "WARNING";
	this->_index[3] = "ERROR";

	this->_ptr_function[0] = &Harl::_debug;
	this->_ptr_function[1] = &Harl::_info;
	this->_ptr_function[2] = &Harl::_waring;
	this->_ptr_function[3] = &Harl::_error;

}

Harl::~Harl()
{

}

void 	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my \\ "
				 "7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void 	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \\"
				 " enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void 	Harl::_waring(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming \\ "
				 "for years whereas you started working here since last month." << std::endl;
}

void 	Harl::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int i = 0;

	while (i < 4)
	{
		if (level == this->_index[i])
		{
			(this->*_ptr_function[i])();
			return ;
		}
		i++;
	}
}
