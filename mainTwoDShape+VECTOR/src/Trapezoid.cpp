/*
 * Trapezoid.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: Rossy
 */

#include "Trapezoid.h"



Trapezoid::~Trapezoid() {
	// TODO Auto-generated destructor stub
}

int Trapezoid::getH() const {
	return h;
}

Trapezoid::Trapezoid(int a, int b, string color, int h):TwoDShape(a, b, color) {
	setH(h);
}

void Trapezoid::print() {
	TwoDShape::print();
		cout<<getH();
}

double Trapezoid::calcArea() {
	return 0;
}

void Trapezoid::setH(int h) {
	this->h = h;
}
