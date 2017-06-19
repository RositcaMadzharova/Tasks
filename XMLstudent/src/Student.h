/*
 * Student.h
 *
 *  Created on: May 27, 2017
 *      Author: Rossy
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
#include "Address.h"
#include "pugixml.hpp"
using namespace std;

class Student {
private:
	 Address address;
     string fullname;
     string course;
     string college;
     string birthdate;

public:
	Student();
	Student(Address& address,string fullname,string course, string college,string birthdate);
	virtual ~Student();
	void print();
	const Address& getAddress() const;
	void setAddress(const Address& address);
	const string& getBirthdate() const;
	void setBirthdate(const string& birthdate);
	const string& getCollege() const;
	void setCollege(const string& college);
	const string& getCourse() const;
	void setCourse(const string& course);
	const string& getFullname() const;
	void setFullname(const string& fullname);
};

#endif /* STUDENT_H_ */
