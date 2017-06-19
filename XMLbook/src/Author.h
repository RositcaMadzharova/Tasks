/*
 * Author.h
 *
 *  Created on: 23.05.2017 г.
 *      Author: Rossi
 */

#ifndef AUTHOR_H_
#define AUTHOR_H_
#include <iostream>
#include <string>
using namespace std;

class Author {
private:
	string name;
	string nationality;
	string awards;
public:
	Author();
	Author(string name,string nationality,string awards);
	virtual ~Author();
	void print();

	const string& getAwards() const;
	void setAwards(const string& awards);

	const string& getName() const;
	void setName(const string& name);

	const string& getNationality() const;
	void setNationality(const string& nationality);


};

#endif /* AUTHOR_H_ */
