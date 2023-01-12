#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class Phonebook{

private:
	Contact _my_contact[8];
	int 	_index;
	int 	_nb_contact;

public:
	Phonebook(void);
	~Phonebook(void);

	int 	get_index(void);
	void	add_contact(void);
	void 	search_contact(void);
	void 	print_contact(int index);

};

#endif
