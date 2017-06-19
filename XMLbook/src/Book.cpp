/*
 * Book.cpp
 *
 *  Created on: 23.05.2017 г.
 *      Author: Rossi
 */

#include "Book.h"

Book::Book():author() {

		setTitle(" ");
		setGenre(" ");
		setPrice(0.00);
		setPublishDate(" ");
}

Book::Book( Author& author, string title, string genre, float price, string publish_date):author (author) {

	setTitle(title);
	setGenre(genre);
	setPrice(price);
	setPublishDate(publish_date);
}

Book::~Book() {
	// TODO Auto-generated destructor stub
}



const string& Book::getGenre() const {
	return genre;
}

void Book::setGenre(const string& genre) {
	this->genre = genre;
}

float Book::getPrice() const {
	return price;
}

void Book::setPrice(float price) {
	this->price = price;
}

const string& Book::getPublishDate() const {
	return publish_date;
}

void Book::setPublishDate(const string& publishDate) {
	publish_date = publishDate;
}

const string& Book::getTitle() const {
	return title;
}

void Book::setTitle(const string& title) {
	this->title = title;
}

void Book::print() {
	author.print();
	cout<<getTitle()<<" "<<getGenre()<<" "<<getPrice()<<" "<<getPublishDate()<<" "<<endl;
}

const Author& Book::getAuthor() const {
	return author;
}

void Book::setAuthor(const Author& author) {
	this->author = author;
}
