/*
 * Triangle.h
 *
 *  Created on: Apr 21, 2017
 *      Author: Rossy
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "TwoDShape.h"

class Triangle: public TwoDShape {
public:
	Triangle();
	Triangle(int a, int b,  string color, int c);
	virtual ~Triangle();
	void print();
	int getC() const;
	void setC(int c);
	double calcArea();

private:
	int c;
};

#endif /* TRIANGLE_H_ */
