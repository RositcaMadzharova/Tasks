/*
 * Author.cpp
 *
 *  Created on: 23.05.2017 г.
 *      Author: Rossi
 */

#include "Author.h"

Author::Author() {
	setName(" ");
	setNationality(" ");
	setAwards(" ");

}
Author::Author(string name, string nationality, string awards) {
	setName(name);
	setNationality(nationality);
	setAwards(awards);
}

Author::~Author() {

}

const string& Author::getAwards() const {
	return awards;
}

void Author::setAwards(const string& awards) {
	this->awards = awards;
}

const string& Author::getName() const {
	return name;
}

void Author::setName(const string& name) {
	this->name = name;
}

const string& Author::getNationality() const {
	return nationality;
}

void Author::print() {
	cout << getName() << " " <<getNationality() << " " << getAwards()<< " "<<endl;
}

void Author::setNationality(const string& nationality) {
	this->nationality = nationality;
}
