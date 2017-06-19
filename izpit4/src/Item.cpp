/*
 * Item.cpp
 *
 *  Created on: Jun 7, 2017
 *      Author: Rossy
 */

#include "Item.h"

Item::Item() {
	    setType(" ");
		setBrand(" ");
		setModel(" ");
		setQuantity(0);
		setPriceitem(0.0);
}

Item::Item(string type, string brand, string model, int quantity,
		double priceitem) {
	setType(type);
	setBrand(brand);
	setModel(model);
	setQuantity(quantity);
	setPriceitem(priceitem);
}

void Item::print() const {
	cout << getType() << "  " << getBrand() << " " << getModel() << " "
			<< getQuantity() << " " << getPriceitem() << endl;
}

Item::~Item() {
	// TODO Auto-generated destructor stub
}

const string& Item::getBrand() const {
	return brand;
}

void Item::setBrand(const string& brand) {
	this->brand = brand;
}

const string& Item::getModel() const {
	return model;
}

void Item::setModel(const string& model) {
	this->model = model;
}

double Item::getPriceitem() const {
	return priceitem;
}

void Item::setPriceitem(double priceitem) {
	this->priceitem = priceitem;
}

int Item::getQuantity() const {
	return quantity;
}

void Item::setQuantity(int quantity) {
	this->quantity = quantity;
}

const string& Item::getType() const {
	return type;
}

void Item::setType(const string& type) {
	this->type = type;
}
