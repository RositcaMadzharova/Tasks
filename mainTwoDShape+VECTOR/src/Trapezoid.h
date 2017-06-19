/*
 * Trapezoid.h
 *
 *  Created on: Apr 21, 2017
 *      Author: Rossy
 */

#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "TwoDShape.h"

class Trapezoid: public TwoDShape {
public:
	Trapezoid();
	Trapezoid(int a, int b,string color, int  h);
	virtual ~Trapezoid();
	void print();
	double calcArea();
	int getH() const;
	void setH(int h);

private:
	int h;
};

#endif /* TRAPEZOID_H_ */
