/*
 * Student.cpp
 *
 *  Created on: May 27, 2017
 *      Author: Rossy
 */

#include "Student.h"

Student::Student():address() {

	setFullname("");
	setCourse("");
	setCollege("");
	setBirthdate("");

}

Student::Student(Address& address,string fullname,string course, string college,string birthdate):address(address){

	    setFullname(fullname);
		setCourse(course);
		setCollege(college);
		setBirthdate(birthdate);
}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

const Address& Student::getAddress() const {
	return address;
}

void Student::setAddress(const Address& address) {
	this->address = address;
}

const string& Student::getBirthdate() const {
	return birthdate;
}

void Student::setBirthdate(const string& birthdate) {
	this->birthdate = birthdate;
}

const string& Student::getCollege() const {
	return college;
}

void Student::setCollege(const string& college) {
	this->college = college;
}

const string& Student::getCourse() const {
	return course;
}

void Student::setCourse(const string& course) {
	this->course = course;
}

const string& Student::getFullname() const {
	return fullname;
}

void Student::setFullname(const string& fullname) {
	this->fullname = fullname;
}

void Student::print() {
	address.print();
		cout<<getFullname()<<" "<<getCourse()<<" "<<getCollege()<<" "<<getBirthdate()<<endl;
}
