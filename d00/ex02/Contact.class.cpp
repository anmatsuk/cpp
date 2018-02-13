#include <iostream>
#include "Contact.class.hpp"

using namespace std;

Contact::Contact() {
	return;
}

Contact::Contact(string first_name,
			string last_name,
			string nickname,
			string login,
			string postal_address,
			string email,
			string phone_number,
			string birthday,
			string meal,
			string underwear_color,
			string secret) : 	_first_name(first_name),
								_last_name(last_name),
								_nickname(nickname),
								_login(login),
								_postal_address(postal_address),
								_email(email),
								_phone_number(phone_number),
								_birthday(birthday),
								_meal(meal),
								_underwear_color(underwear_color),
								_secret(secret) {
	return;
}

void	Contact::setFirstName(string first_name) {
	this->_first_name = first_name;
	return;
}

void	Contact::setLastName(string last_name) {
	this->_last_name = last_name;
	return;
}

void	Contact::setNickname(string	nickname) {
	this->_nickname = nickname;
	return;
}

void	Contact::setLogin(string login) {
	this->_login = login;
	return;
}

void	Contact::setPostalAddress(string postal_address) {
	this->_postal_address = postal_address;
	return;
}

void	Contact::setEmail(string email) {
	this->_email = email;
	return;
}

void	Contact::setPhoneNumber(string phone_number) {
	this->_phone_number = phone_number;
	return;
}
void	Contact::setBirthday(string birthday) {
	this->_birthday = birthday;
	return;
}

void	Contact::setMeal(string meal) {
	this->_meal = meal;
	return;
}

void	Contact::setUnderWear(string underwear_color) {
	this->_underwear_color = underwear_color;
	return;
}

void	Contact::setSecret(string secret) {
	this->_secret = secret;
	return;
}

string	Contact::getFirstName(void) const {
	return this->_first_name;
}

string	Contact::getLastName(void) const {
	return this->_last_name ;
}

string	Contact::getNickname(void) const {
	return this->_nickname;
}

string	Contact::getLogin(void) const {
	return this->_login;
}

string	Contact::getPostalAddress(void) const {
	return this->_postal_address;
}

string	Contact::getEmail(void) const {
	return this->_email;
}

string	Contact::getPhoneNumber(void) const {
	return this->_phone_number;
}

string	Contact::getBirthday(void) const {
	return this->_birthday;
}

string	Contact::getMeal(void) const {
	return this->_meal;
}

string	Contact::getUnderWear(void) const {
	return this->_underwear_color;
}

string	Contact::getSecret(void) const {
	return this->_secret;
}

Contact::~Contact() {
	return;
}

