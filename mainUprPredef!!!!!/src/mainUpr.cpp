//============================================================================
// Name        : mainUpr.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Upr.h"

int main() {


	Upr x1(6,6,6);
	Upr x2(2,2,2);



	Upr x3 = x1 + x2;
		cout<<x3<<endl;

		Upr x4 = x1 - x2;
				cout<<x4<<endl;

		if(x1 == x2)
			cout<<"Yea"<<endl;
			else cout<<"No"<<endl;


		if(x1 != x2)
					cout<<"Yea"<<endl;
					else cout<<"No"<<endl;

		if(x1 > x2)
					cout<<"Yea"<<endl;
					else cout<<"No"<<endl;

		if(x1 < x2)
					cout<<"Yea"<<endl;
					else cout<<"No"<<endl;





	return 0;
}
