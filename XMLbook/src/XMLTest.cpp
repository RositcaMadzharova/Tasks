//============================================================================
// Name        : XMLTest.cpp
// Author      : Katya
// Version     :
// Copyright   : OnTarget
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Operation.h"
using namespace std;


int main() {
	Operation op;
	 op.Traverse( "XMLfile.xml");
	 op.print();
	return 0;
}
