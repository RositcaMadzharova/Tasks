//============================================================================
// Name        : izpit4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Company.h"

int main() {

	Company company;
	string type;

	mapItem store1 = company.Traverse("store1.xml");
	mapItem store2 = company.Traverse("store2.xml");
	mapItem store3 = company.Traverse("store3.xml");

	int enterChoice();
	int choice;

	while ((choice = company.enterChoice()) != END)
		{
			switch (choice)
			{
			case DAILIALLSTORE:
				cout << "Total profit: "
						<< company.companyDailyIncome(store1, store2, store3) << " BGL"
						<< endl;
				break;
			case DAILIEACHSTORE:
				cout << "Store 1 Income: " << company.storeDailyIncome(store1) << " BGL"
						<< endl;
				cout << "Store 2 Income: " << company.storeDailyIncome(store2) << " BGL"
						<< endl;
				cout << "Store 3 Income: " << company.storeDailyIncome(store3) << " BGL"
						<< endl;
				break;
			case LEAST:
				cout << "Least income store's information" << endl;
				company.print(company.leastIncomeStore(store1,store2,store3));
				cout << endl;
				break;
			case BIGGEST:
				cout << "Biggest income store's information" << endl;
				company.print(company.biggestIncomeStore(store1,store2,store3));
				cout << endl;
				break;
			case BESTSITEM:
				cout << "Best selling item: "
						<< company.bestSellingItem(store1, store2, store3);
				cout << endl;
				break;
			case MOST:
				cout << "Most profitable item: "
				<< company.mostProfitableItem(store1, store2, store3);
				cout << endl;
				break;
			case INCOMEBYTYPE:
				company.typeIncome(store1, store2, store3);
				cout << endl;
				break;
			case SEARCHBYNAME:
				cout << "Enter item name to search for:";
				cin >> type;
				company.searchByType(store1,  store2, store3, type);
				break;
				break;
			default:
				cerr << "Wrong choice";
				break;

			}
		}

	return 0;
}
