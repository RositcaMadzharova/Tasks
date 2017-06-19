/*
 * Book.h
 *
 *  Created on: 23.05.2017 г.
 *      Author: Rossi
 */

#ifndef BOOK_H_
#define BOOK_H_
#include <iostream>
#include <string>
#include "Author.h"
#include "pugixml.hpp"
using namespace std;


class Book {
private:
	 Author author;
     string title;
     string genre;
     float price;
     string publish_date;
public:
	Book();
	Book(Author& author,string title,string genre,float price,string publish_date);
	virtual ~Book();
	void print();
    const string& getGenre() const;
	void setGenre(const string& genre);
	float getPrice() const;
	void setPrice(float price);
	const string& getPublishDate() const;
	void setPublishDate(const string& publishDate);
	const string& getTitle() const;
	void setTitle(const string& title);
	const Author& getAuthor() const;
	void setAuthor(const Author& author);


};



#endif /* BOOK_H_ */
