#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <cstdlib>
#include <iomanip>

class Contact{

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

public:
	Contact(void);
	~Contact(void);

	//getters
	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nickname(void);
	std::string get_phone_number(void);
	std::string get_darkest_secret(void);

	//functions
	std::string get_input(std::string str);
	void		set_info(void);
	void 		print_info(int nb);
	std::string trim_info(std::string input);
};

#endif
