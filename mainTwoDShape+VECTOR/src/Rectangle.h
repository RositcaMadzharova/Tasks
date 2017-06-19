/*
 * Rectangle.h
 *
 *  Created on: Apr 21, 2017
 *      Author: Rossy
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "TwoDShape.h"

class Rectangle: public TwoDShape {
public:
	Rectangle();
	Rectangle(int a,int b, string color);
	virtual ~Rectangle();
	virtual void print();
	double calcArea();
};

#endif /* RECTANGLE_H_ */
