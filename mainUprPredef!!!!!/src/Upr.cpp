/*
 * Upr.cpp
 *
 *  Created on: May 16, 2017
 *      Author: Rossy
 */

#include "Upr.h"

Upr::Upr() {
	setA(0);
	setB(0);
	setH(0);

}

int Upr::getA() const {
	return a;
}

void Upr::setA(int a) {
	this->a = a;
}

int Upr::getB() const {
	return b;
}

void Upr::setB(int b) {
	this->b = b;
}

int Upr::getH() const {
	return h;
}

Upr::Upr(int a, int b, int h) {
	setA(a);
	setB(b);
	setH(h);
}

ostream& operator<<(ostream& output, const Upr x){
	output<<"["<<x.getA()<<"-"<<x.getB()<<"-"<<x.getH()<<"]";
	return output;
}
istream& operator>>(istream& input, Upr x){


	input>>x.a;
	input.ignore(1);
	input>>x.b;
	input.ignore(1);
	input>>x.h;
	input.ignore(1);


	return input;
}

Upr& Upr::operator +(Upr& right) {

	int newA = this->a + right.a;
	int newB = this->b + right.b;
	int newH = this->h + right.h;

	Upr *newX = new Upr(newA, newB, newH);
	return *newX;
}

Upr& Upr::operator -(Upr& right) {

	int newA = this->a - right.a;
	int newB = this->b - right.b;
	int newH = this->h - right.h;

	Upr *newX = new Upr(newA, newB, newH);
	return *newX;
}

bool Upr::operator >(Upr& right) {

	if(this->a > right.a && this->b > right.b && this->h > right.h)
					return true;
			return false;
}

bool Upr::operator <(Upr& right) {

	if(this->a < right.a && this->b < right.b && this->h < right.h)
					return true;
			return false;
}

bool Upr::operator ==(Upr& right) {

	if(this->a == right.a && this->b == right.b && this->h == right.h)
					return true;
			return false;
}

bool Upr::operator !=(Upr& right) {

	if(this->a != right.a && this->b != right.b && this->h!= right.h)
					return true;
			return false;
}

double Upr::calcObem() {

	return getA() * getB() * getH();
}

void Upr::setH(int h) {
	this->h = h;
}

Upr::~Upr() {
	// TODO Auto-generated destructor stub
}

