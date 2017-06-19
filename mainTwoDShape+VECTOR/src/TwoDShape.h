/*
 * TwoDShape.h
 *
 *  Created on: Apr 21, 2017
 *      Author: Rossy
 */

#ifndef TWODSHAPE_H_
#define TWODSHAPE_H_
#include <iostream>
using namespace std;
#include <string>


class TwoDShape {
public:
	TwoDShape();
	TwoDShape(int a, int b, string color);
	virtual ~TwoDShape();
	virtual void print();
	int getA() const;
	void setA(int a);
	int getB() const;
	void setB(int b);
	const string& getColor() const;
	void setColor(const string& color);
	virtual double calcArea();

private:
	int a;
	int b;
	string color;
};

#endif /* TWODSHAPE_H_ */
