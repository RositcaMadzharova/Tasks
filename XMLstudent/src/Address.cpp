/*
 * Address.cpp
 *
 *  Created on: May 27, 2017
 *      Author: Rossy
 */

#include "Address.h"
#include <stdlib.h>
#include <stdio.h>

Address::Address() {

	    setCountry("");
		setCity("");
		setStreet("");
		setNum(0);

}

Address::Address(string country,string city,string street, int num) {
	setCountry(country);
	setCity(city);
	setStreet(street);
	setNum(num);
}

Address::~Address() {
	// TODO Auto-generated destructor stub
}

const string& Address::getCity() const {
	return city;
}

void Address::setCity(const string& city) {
	this->city = city;
}

const string& Address::getCountry() const {
	return country;
}

void Address::setCountry(const string& country) {
	this->country = country;
}

int Address::getNum() const {
	return num;
}

void Address::setNum(int num) {
	this->num = num;
}

const string& Address::getStreet() const {
	return street;
}

void Address::setStreet(const string& street) {
	this->street = street;
}

void Address::print() {

	cout << getCountry() << " " <<getCity() << " " << getStreet()<< " "<<getNum()<<endl;
}
