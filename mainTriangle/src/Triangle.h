/*
 * Triangle.h
 *
 *  Created on: May 15, 2017
 *      Author: Rossy
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include <iostream>
using std::ostream;
using std::istream;
#include <string>
using std::string;

class Triangle {
	friend ostream& operator<<(ostream&, const Triangle x);
	friend istream& operator>>(istream&, Triangle x);
private:
	int a;
	int b;
	int c;
	int h;
public:
	Triangle();
	Triangle(int a, int b, int c, int h);
	bool operator!=(Triangle&);
	bool operator==(Triangle&);
	virtual ~Triangle();
	int getA() const;
	void setA(int a);
	int getB() const;
	void setB(int b);
	int getC() const;
	void setC(int c);
	int getH() const;
	void setH(int h);
};

#endif /* TRIANGLE_H_ */
