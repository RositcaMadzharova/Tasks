/*
 * TwoDShape.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: Rossy
 */

#include "TwoDShape.h"
#include <iostream>
using namespace std;
#include <string>



TwoDShape::~TwoDShape() {
	// TODO Auto-generated destructor stub
}

int TwoDShape::getA() const {
	return a;
}

void TwoDShape::setA(int a) {
	this->a = a;
}

int TwoDShape::getB() const {
	return b;
}

void TwoDShape::setB(int b) {
	this->b = b;
}

const string& TwoDShape::getColor() const {
	return color;
}

TwoDShape::TwoDShape(int a, int b, string color) {
	setA(a);
	setB(b);
	setColor(color);
}

void TwoDShape::print() {
	cout<<getA()<<" "<<getB()<<" "<<getColor()<<" ";
}

void TwoDShape::setColor(const string& color) {
	this->color = color;
}

double TwoDShape::calcArea() {
	return 0;
}
