#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"

class Phonebook{

private:
	Contact _my_contact[8];
	int 	_index;

public:
	Phonebook(void);
	~Phonebook(void);

	int 	get_index(void);
	void 	set_index(void);
	void	add_contact(void);
	void 	search_contact(void);

};

#endif
