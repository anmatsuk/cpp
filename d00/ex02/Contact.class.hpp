#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

using namespace std;

class Contact
{
public:
	Contact();
	Contact(string first_name,
			string last_name,
			string nickname,
			string login,
			string postal_address,
			string email,
			string phone_number,
			string birthday,
			string meal,
			string underwear_color,
			string secret);

	void	setFirstName(string first_name);
	void	setLastName(string last_name);
	void	setNickname(string	nickname);
	void	setLogin(string login);
	void	setPostalAddress(string postal_address);
	void	setEmail(string email);
	void	setPhoneNumber(string phone_number);
	void	setBirthday(string birthday);
	void	setMeal(string meal);
	void	setUnderWear(string underwear_color);
	void	setSecret(string secret);

	string	getFirstName(void) const;
	string	getLastName(void) const;
	string	getNickname(void) const;
	string	getLogin(void) const;
	string	getPostalAddress(void) const;
	string	getEmail(void) const;
	string	getPhoneNumber(void) const;
	string	getBirthday(void) const;
	string	getMeal(void) const;
	string	getUnderWear(void) const;
	string	getSecret(void) const;

	~Contact();

private:
	string	_first_name;
	string	_last_name;
	string	_nickname;
	string	_login;
	string	_postal_address;
	string	_email;
	string 	_phone_number;
	string	_birthday;
	string	_meal;
	string	_underwear_color;
	string	_secret;
};

#endif
