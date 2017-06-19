/*
 * Rectangle.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: Rossy
 */

#include "Rectangle.h"



Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}

Rectangle::Rectangle(int a, int b, string color):TwoDShape(a, b, color) {

}

void Rectangle::print() {
	TwoDShape::print();
}

double Rectangle::calcArea() {
	return getA() * getB();
}
