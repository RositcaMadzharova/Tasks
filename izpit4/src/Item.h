/*
 * Item.h
 *
 *  Created on: Jun 7, 2017
 *      Author: Rossy
 */

#ifndef ITEM_H_
#define ITEM_H_
#include "pugixml.hpp"
#include <iostream>
#include <string>
using namespace std;

class Item {
private:
	string type;
	string brand;
	string model;
	int quantity;
	double priceitem;

public:
	Item();
	Item(string type, string brand, string model,
			int quantity, double priceitem);
	void print() const;
	virtual ~Item();
	const string& getBrand() const;
	void setBrand(const string& brand);
	const string& getModel() const;
	void setModel(const string& model);
	double getPriceitem() const;
	void setPriceitem(double priceitem);
	int getQuantity() const;
	void setQuantity(int quantity);
	const string& getType() const;
	void setType(const string& type);
};

#endif /* ITEM_H_ */
