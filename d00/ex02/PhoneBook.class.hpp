
#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstddef>

using namespace std;

class PhoneBook {

public:

	PhoneBook();
	~PhoneBook();
	int		getContactCount(void);
	
	void	addToPhoneBook(void);
	void	startPhoneBook(void);

private:
	Contact contactList[8];
	int	_nbContact;

	void	_toLowerCase(string *str);
	void	_createContact(Contact *person);
	void	_getLine(string *str) const;
	void	_searchContact(void) const;
	void	_printSearch(void) const;
	void	_ShowContact(int index) const;
	string	_resizeString(string str) const;
};

#endif
