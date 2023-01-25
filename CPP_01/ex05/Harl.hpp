#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
private:

	void		_debug(void);
	void 		_info(void);
	void 		_warning(void);
	void 		_error(void);
	void 		(Harl::*_ptr_function[4])(void);
	std::string	_index[4];

public:

	Harl();


	void	complain(std::string level);
};

#endif
