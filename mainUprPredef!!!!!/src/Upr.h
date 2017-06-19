/*
 * Upr.h
 *
 *  Created on: May 16, 2017
 *      Author: Rossy
 */

#ifndef UPR_H_
#define UPR_H_
#include <iostream>
using std::ostream;
using std::istream;
#include <string>
using std::string;

class Upr {
	friend ostream& operator<<(ostream&, const Upr x);
	friend istream& operator>>(istream&, Upr x);
private:
	int a;
	int b;
	int h;
public:
	Upr();
	Upr(int a, int b, int h);
	Upr& operator+(Upr&);
	Upr& operator-(Upr&);
	bool operator>(Upr&);
	bool operator<(Upr&);
	bool operator==(Upr&);
	bool operator!=(Upr&);
	double calcObem();
	virtual ~Upr();
	int getA() const;
	void setA(int a);
	int getB() const;
	void setB(int b);
	int getH() const;
	void setH(int h);
};

#endif /* UPR_H_ */
