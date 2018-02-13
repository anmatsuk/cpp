#include <iostream>
#include "PhoneBook.class.hpp"
using namespace std;

void PhoneBook::_toLowerCase(string *str) {
	
	size_t len;
	size_t i;

	i = 0;
	len = str->length();
	while(i < len)
	{
		if ((*str)[i] > 65 && (*str)[i] < 90)
			(*str)[i] = ((*str)[i] + 32);
		i++;
	}
}

PhoneBook::PhoneBook() : _nbContact(0) {
	return;
}

PhoneBook::~PhoneBook() {
	return;
}

int		PhoneBook::getContactCount(void) {
	return this->_nbContact;
}

void	PhoneBook::addToPhoneBook(void)
{
	if (this->_nbContact < 9)
	{
		Contact person;
		_createContact(&person);
		this->contactList[this->_nbContact] = person;
		this->_nbContact += 1;
	}
	else
		cout << "Phone book is full" << endl;
}

void PhoneBook::startPhoneBook(void) {
	string state;

	while (1)
	{
		cout << "PHONE BOOK cmd:  ";
		_getLine(&state);
		_toLowerCase(&state);
		if (state.compare("exit") == 0) {
			return;
		}
		else if (state.compare("add") == 0) {
			cout << "< Adding new contact >" << endl;
			addToPhoneBook();
		}
		else if (state.compare("search") == 0) {
			cout << "Searching contact ..." << endl;
			_searchContact();
		}
		else {
			cout << "Didn't get you, try: search, add or exit" << endl;
		}
	}
}

void	PhoneBook::_getLine(string *str) const {
	if (!(getline(cin, *str, '\n')))
		exit(0);
}

void	PhoneBook::_printSearch(void) const {

	int i;

	i = 0;

	cout << '|';
	cout << setw(10);
	cout << "index";
	cout << '|';
	cout << setw(10);
	cout << "name";
	cout << '|';
	cout << setw(10);
	cout << "last name";
	cout << '|';
	cout << setw(10);
	cout << "nickname";
	cout << '|' << endl;
	while (i < PhoneBook::_nbContact) {

		cout << '|';
		cout << setw(10);
		cout << (i + 1);
		cout << '|';
		cout << setw(10);
		cout << _resizeString(this->contactList[i].getFirstName());
		cout << '|';
		cout << setw(10);
		cout << _resizeString(this->contactList[i].getLastName());
		cout << '|';
		cout << setw(10);
		cout << _resizeString(this->contactList[i].getNickname());
		cout << '|'  << endl;
		
		i++;
	}

}

void	PhoneBook::_ShowContact(int index) const {

	cout << endl << "first name: ";
	cout << this->contactList[index - 1].getFirstName();
	cout << endl << "last name: ";
	cout << this->contactList[index - 1].getLastName();
	cout << endl << "nickname: ";
	cout << this->contactList[index - 1].getNickname();
	cout << endl << "login: ";
	cout << this->contactList[index - 1].getLogin();
	cout << endl << "postal address: ";
	cout << this->contactList[index - 1].getPostalAddress();
	cout << endl << "email: ";
	cout << this->contactList[index - 1].getEmail();
	cout << endl << "phone number: ";
	cout << this->contactList[index - 1].getPhoneNumber();
	cout << endl << "birthday: ";
	cout << this->contactList[index - 1].getBirthday();
	cout << endl << "meal: ";
	cout << this->contactList[index - 1].getMeal();
	cout << endl << "underwear_color: ";
	cout << this->contactList[index - 1].getUnderWear();
	cout << endl << "secret =): ";
	cout << this->contactList[index - 1].getSecret();
	cout << endl << endl;

}

void	PhoneBook::_searchContact(void) const {
	
	string	index;
	int		ind;
	if (_nbContact == 0) {
		cout << "Phone Book is empty ..." << endl;
		return;
	}
	_printSearch();
	cout << endl << "Specify index to get info: ";
	_getLine(&index);
	ind = atoi(index.c_str());
	
	if (ind > 0 && ind < (_nbContact + 1)) {
		_ShowContact(ind);
	}
	else {
		cout << "No such index exists ..." << endl;
	}
	return;
}

void	PhoneBook::_createContact(Contact *person) {

	string first_name;
	string last_name;
	string nickname;
	string login;
	string postal_address;
	string email;
	string phone_number;
	string birthday;
	string meal;
	string underwear_color;
	string secret;

	cout << "enter first name: ";
	PhoneBook::_getLine(&first_name);
	cout << endl << "enter last name: ";
	PhoneBook::_getLine(&last_name);
	cout << endl << "enter nickname: ";
	PhoneBook::_getLine(&nickname);
	cout << endl << "enter login: ";
	PhoneBook::_getLine(&login);
	cout << endl << "enter postal address: ";
	PhoneBook::_getLine(&postal_address);
	cout << endl << "enter email: ";
	PhoneBook::_getLine(&email);
	cout << endl << "enter phone number: ";
	PhoneBook::_getLine(&phone_number);
	cout << endl << "enter birthday: ";
	PhoneBook::_getLine(&birthday);
	cout << endl << "enter meal: ";
	PhoneBook::_getLine(&meal);
	cout << endl << "enter underwear_color: ";
	PhoneBook::_getLine(&underwear_color);
	cout << endl << "enter secret =): ";
	PhoneBook::_getLine(&secret);

	person->setFirstName(first_name);
	person->setLastName(last_name);
	person->setNickname(nickname);
	person->setLogin(login);
	person->setPostalAddress(postal_address);
	person->setEmail(email);
	person->setPhoneNumber(phone_number);
	person->setBirthday(birthday);
	person->setMeal(meal);
	person->setUnderWear(underwear_color);
	person->setSecret(secret);
	cout << endl;
	return;
}

string PhoneBook::_resizeString(string str) const {
	if (str.length() > 9) {
		str.resize(10);
		str[9] = '.';	
	}
	return str;
}

