//============================================================================
// Name        : mainTwoDShape.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string>
#include"TwoDShape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Trapezoid.h"
#include <vector>
int main() {


	Rectangle rect(2,4,"blue");
	Triangle tr1(12,23,"blue",11);
	Trapezoid trz1(6,6,"red",8);
	Rectangle rect2(3,6,"blue");


	vector<TwoDShape*>shapes;
	shapes.push_back(&rect);
	shapes.push_back(&tr1);
	shapes.push_back(&trz1);
	shapes.push_back(&rect2);

		for(unsigned int i=0; i<shapes.size(); i++){
		shapes[i]->print(); cout<<endl;
		cout<<shapes[i]->calcArea(); cout<<endl;


	}



	return 0;
}
