//============================================================================
// Name        : Student.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Student.h"
using namespace std;

int main() {

	int grades[]={2, 5 , 3, 3, 2, 5 ,3, 3, 3, 6};
	Student Gogo("Georgi", "Dobrev","9804265686",2,"IT",grades);
	Gogo.printInfo();
	cout<<Gogo.gradeAverage()<<endl;
	cout<<Gogo.gradeMax()<<endl;
	cout<<Gogo.gradeMin()<<endl;
	cout<<Gogo.countSix()<<endl;
	cout<<Gogo.countTwo()<<endl;











	return 0;
}
