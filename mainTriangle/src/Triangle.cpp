/*
 * Triangle.cpp
 *
 *  Created on: May 15, 2017
 *      Author: Rossy
 */

#include "Triangle.h"

Triangle::Triangle() {
	// TODO Auto-generated constructor stub

}

Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

ostream& operator<<(ostream& output, const Triangle x){
	output<<"="<<x.getA()<<","<<x.getB()<<","<<x.getC()<<","<<x.getH();
	return output;
}

istream& operator>>(istream& input, Triangle x){

	input.ignore(1);  //-a-b-c-h
	input>>x.a;
	input.ignore(1);
	input>>x.b;
	input.ignore(1);
	input>>x.c;
	input.ignore(1);
	input>>x.h;

	return input;
}
int Triangle::getA() const {
	return a;
}

void Triangle::setA(int a) {
	this->a = a;
}

int Triangle::getB() const {
	return b;
}

void Triangle::setB(int b) {
	this->b = b;
}

int Triangle::getC() const {
	return c;
}

void Triangle::setC(int c) {
	this->c = c;
}

int Triangle::getH() const {
	return h;
}



bool Triangle::operator !=(Triangle& right) {
	if(this->a != right.a && this->b != right.b && this->c != right.c && this->h != right.h)
		return true;
		 	return false;
}

bool Triangle::operator ==(Triangle& right) {
	if(this->a == right.a && this->b == right.b && this->c == right.c && this->h == right.h)
			return true;
			 	return false;
}

Triangle::Triangle(int a, int b, int c, int h) {
	setA(a);
	setB(b);
	setC(c);
	setH(h);
}


void Triangle::setH(int h) {
	this->h = h;
}
