/*
 * Operations.cpp
 *
 *  Created on: May 27, 2017
 *      Author: Rossy
 */

#include "Operations.h"

Operations::Operations() {
	// TODO Auto-generated constructor stub

}

void Operations::Traverse(const char* fileName) {
	pugi::xml_document doc;
		if (!doc.load_file(fileName)) {
			cout << "ERROR";
		}
		pugi::xml_node studentdetails = doc.child("studentdetails");


		for (pugi::xml_node student = studentdetails.child("student"); student;student = student.next_sibling("student")) {


			 for (pugi::xml_attribute attr = student.first_attribute(); attr; attr =
			 attr.next_attribute()) {
			 cout <<  attr.name() << "=" << attr.value() << " ";
			 }



			cout << endl;

			string acountry = student.child("address").child("country").text().as_string();
			string acity = student.child("address").child("city").text().as_string();
			string astreet = student.child("address").child("street").text().as_string();
			int anum = student.child("num").text().as_int();
			string fullname = student.child("fullname").text().as_string();
			string course = student.child("course").text().as_string();
			string college = student.child("college").text().as_string();
			string birthdate = student.child("birthdate").text().as_string();
			Address *aa = new Address(acountry, acity, astreet, anum);
			Student *bookk = new Student(*aa, fullname, course, college, birthdate);
			bookkk.push_back(bookk);

		}
}

void Operations::print() {

	for (unsigned i = 0; i < bookkk.size(); i++) {
			bookkk[i]->print();
		}
}

Operations::~Operations() {
	// TODO Auto-generated destructor stub
}

