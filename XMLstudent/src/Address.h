/*
 * Address.h
 *
 *  Created on: May 27, 2017
 *      Author: Rossy
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_
#include <iostream>
#include <string>
using namespace std;

class Address {
	private:
	string country;
	string city;
	string street;
	int num;
public:
	Address();
	Address(string country,string city,string street, int num);
	virtual ~Address();
	void print();
	const string& getCity() const;
	void setCity(const string& city);
	const string& getCountry() const;
	void setCountry(const string& country);
	int getNum() const;
	void setNum(int num);
	const string& getStreet() const;
	void setStreet(const string& street);
};

#endif /* ADDRESS_H_ */
