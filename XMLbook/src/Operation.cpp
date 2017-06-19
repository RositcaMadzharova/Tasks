/*
 * Operation.cpp
 *
 *  Created on: 23.05.2017 г.
 *      Author: Rossi
 */

#include "Operation.h"

Operation::Operation() {
}

Operation::~Operation() {
}

void Operation::Traverse(const char* fileName) {
	pugi::xml_document doc;
	if (!doc.load_file(fileName)) {
		cout << "ERROR";
	}
	pugi::xml_node catalog = doc.child("catalog");


	for (pugi::xml_node book = catalog.child("book"); book;book = book.next_sibling("book")) {

		/*
		 for (pugi::xml_attribute attr = book.first_attribute(); attr; attr =
		 attr.next_attribute()) {
		 cout << " id " << attr.name() << "=" << attr.value() << " ";
		 }*/



		cout << endl;

		string aname = book.child("author").child("name").text().as_string();
		string anationality = book.child("author").child("nationality").text().as_string();
		string aawards = book.child("author").child("awards").text().as_string();
		string title = book.child("title").text().as_string();
		string genre = book.child("genre").text().as_string();
		float price = book.child("price").text().as_float();
		string publish_date = book.child("publish_date").text().as_string();
		Author *aa = new Author(aname, anationality, aawards);
		Book *bookk = new Book(*aa, title, genre, price, publish_date);
		bookkk.push_back(bookk);

	}
}

void Operation::print() {
	for (unsigned i = 0; i < bookkk.size(); i++) {
		bookkk[i]->print();
	}
}
