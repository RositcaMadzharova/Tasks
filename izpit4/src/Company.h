/*
 * Company.h
 *
 *  Created on: Jun 7, 2017
 *      Author: Rossy
 */

#ifndef COMPANY_H_
#define COMPANY_H_
#include "Item.h"
#include <map>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdlib>

enum CHOICE {DAILIALLSTORE = 1,DAILIEACHSTORE, LEAST, BIGGEST, BESTSITEM,
	MOST,INCOMEBYTYPE,SEARCHBYNAME ,END};

typedef map<string, vector<Item> > mapItem;

class Company {
public:
	Company();
	mapItem Traverse(const char* fileName);
	int enterChoice();
	void print(const mapItem & map);
	double companyDailyIncome(mapItem store1, mapItem store2, mapItem store3);
	double storeDailyIncome(mapItem store);
	mapItem leastIncomeStore(mapItem store1, mapItem store2, mapItem store3);
	mapItem biggestIncomeStore(mapItem store1, mapItem store2, mapItem store3);
	string bestSellingItem(mapItem store1, mapItem store2, mapItem store3);
	string mostProfitableItem(mapItem store1, mapItem store2, mapItem store3);
	void typeIncome(mapItem store1, mapItem store2, mapItem store3);
	void searchByType(mapItem store1, mapItem store2, mapItem store3, string type);
	virtual ~Company();
};

#endif /* COMPANY_H_ */
