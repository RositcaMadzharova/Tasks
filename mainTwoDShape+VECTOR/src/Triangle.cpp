/*
 * Triangle.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: Rossy
 */

#include "Triangle.h"



Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

int Triangle::getC() const {
	return c;
}

Triangle::Triangle(int a, int b, string color, int c):TwoDShape(a, b, color) {
	setC(c);
}

void Triangle::print() {
	TwoDShape::print();
	cout<<getC();
}

void Triangle::setC(int c) {
	this->c = c;
}

double Triangle::calcArea() {
	return 0;
}
