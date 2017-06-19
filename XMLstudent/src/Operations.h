/*
 * Operations.h
 *
 *  Created on: May 27, 2017
 *      Author: Rossy
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_
#include <iostream>
#include <vector>
#include <string>
#include "pugixml.hpp"
#include "Student.h"
using namespace std;

class Operations {
private:
	vector<Student*> bookkk;
public:
	Operations();
	void Traverse(const char* fileName);
	void print();
	virtual ~Operations();
};

#endif /* OPERATIONS_H_ */
