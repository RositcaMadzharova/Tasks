/*
 * Operation.h
 *
 *  Created on: 23.05.2017 г.
 *      Author: Rossi
 */

#ifndef OPERATION_H_
#define OPERATION_H_
#include <iostream>
#include <vector>
#include <string>
#include "pugixml.hpp"
#include "Book.h"
using namespace std;



class Operation {
private:
	vector<Book*> bookkk;
public:
	Operation();
	void Traverse(const char* fileName);
	virtual ~Operation();
	void print();


};


#endif /* OPERATION_H_ */
