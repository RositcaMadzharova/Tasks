/*
 * Company.cpp
 *
 *  Created on: Jun 7, 2017
 *      Author: Rossy
 */

#include "Company.h"

Company::Company() {
	// TODO Auto-generated constructor stub

}

Company::~Company() {
	// TODO Auto-generated destructor stub
}

mapItem Company::Traverse(const char* fileName) {

	mapItem store;
	Item item;
	vector<Item> itemVector;

	pugi::xml_document doc;

	if (!doc.load_file(fileName)) {
		cout << "No XML file found";
	}

	pugi::xml_node items = doc.child("catalog");

	for (pugi::xml_node i = items.first_child(); i; i = i.next_sibling()) {

		item.setType(i.child("type").text().as_string());
		item.setBrand(i.child("brand").text().as_string());
		item.setModel(i.child("model").text().as_string());
		item.setQuantity(i.child("quantity").text().as_int());
		item.setPriceitem(i.child("priceitem").text().as_double());
		//Item *item = new Item (type,brand,model,quantity,priceitem);
		//store[item.getType()].push_back(item);

		store.insert(mapItem::value_type(item.getType(), itemVector));

		for (mapItem::iterator it = store.begin(); it != store.end(); ++it) {
			if (it->first == item.getType()) {
				it->second.push_back(item);
			}
		}
	}
	return store;
}
int Company::enterChoice() {

	cout << "\n\     MENU";
	cout << "\n\t    1 / Daily income of all store         ";
	cout << "\n\t    2 / Daily income of each store        ";
	cout << "\n\t    3 / Least income store                ";
	cout << "\n\t    4 / Biggest income store              ";
	cout << "\n\t    5 / Lest selling item                 ";
	cout << "\n\t    6 / Most profitable item              ";
	cout << "\n\t    7 / Income by Type                    ";
	cout << "\n\t    8 / Search by item name               ";
	cout << "\n\t    9 / END                               ";
	cout << "\n\t                                     \n\n\t";

	int menuChoice;
	cin >> menuChoice;
	return menuChoice;
}

void Company::print(const mapItem& map) {

	cout << left << setw(10) << "Type" << setw(10) << "Brand" << setw(12)
			<< "Model" << setw(8) << "Amount" << setw(8) << "Price" << endl;

	for (mapItem::const_iterator it = map.begin(); it != map.end(); ++it) {
		for (unsigned i = 0; i < it->second.size(); i++) {
			cout << left << setw(10) << it->second[i].getType() << setw(10)
					<< it->second[i].getBrand() << setw(12)
					<< it->second[i].getModel() << setw(8)
					<< it->second[i].getQuantity() << setw(8)
					<< it->second[i].getPriceitem() << endl;
		}
	}
}

double Company::companyDailyIncome(mapItem store1, mapItem store2,
		mapItem store3) {

	double sum = 0;
	sum += storeDailyIncome(store1);
	sum += storeDailyIncome(store2);
	sum += storeDailyIncome(store3);
	return sum;
}

double Company::storeDailyIncome(mapItem store) {

	double sum = 0;
	for (mapItem::const_iterator iter = store.begin(); iter != store.end();
			++iter) {
		for (unsigned i = 0; i < iter->second.size(); i++) {
			sum += (iter->second[i].getPriceitem()
					* iter->second[i].getQuantity());
		}
	}
	return sum;
}

mapItem Company::leastIncomeStore(mapItem store1, mapItem store2,
		mapItem store3) {

	double store1_income = 0, store2_income = 0, store3_income = 0;
	store1_income = storeDailyIncome(store1);
	store2_income = storeDailyIncome(store2);
	store3_income = storeDailyIncome(store3);

	if (store1_income < store2_income && store1_income < store3_income) {
		return store1;
	} else if (store2_income < store1_income && store2_income < store3_income) {
		return store2;
	} else {
		return store3;
	}
}

mapItem Company::biggestIncomeStore(mapItem store1, mapItem store2,
		mapItem store3) {

	double store1_income = 0, store2_income = 0, store3_income = 0;
	store1_income = storeDailyIncome(store1);
	store2_income = storeDailyIncome(store2);
	store3_income = storeDailyIncome(store3);

	if (store1_income > store2_income && store1_income > store3_income) {
		return store1;
	} else if (store2_income > store1_income && store2_income > store3_income) {
		return store2;
	} else {
		return store3;
	}
}

string Company::bestSellingItem(mapItem store1, mapItem store2,
		mapItem store3) {

	int amountByType = 0, max, flag = 0;
	string temp;
	for (mapItem::const_iterator it1 = store1.begin(), it2 = store2.begin(),
			it3 = store3.begin();
			it1 != store1.end() && it2 != store2.end() && it3 != store3.end();
			++it1, ++it2, ++it3) {
		amountByType = 0;
		for (unsigned i = 0; i < it1->second.size(); i++) {
			amountByType += (it1->second[i].getQuantity());
			amountByType += (it2->second[i].getQuantity());
			amountByType += (it3->second[i].getQuantity());
		}

		if (flag == 0) {
			max = amountByType;
			temp = it1->first;
			flag = 1;
		}

		if (max < amountByType) {
			max = amountByType;
			temp = it1->first;
		}
	}

	return temp;
}

string Company::mostProfitableItem(mapItem store1, mapItem store2,
		mapItem store3) {
	double earningByType = 0, max, flag = 0;
	string temp;
	for (mapItem::const_iterator iter1 = store1.begin(), iter2 = store2.begin(),
			iter3 = store3.begin();
			iter1 != store1.end(), iter2 != store2.end(), iter3 != store3.end();
			++iter1, ++iter2, ++iter3) {
		earningByType = 0;
		for (unsigned i = 0; i < iter1->second.size(); i++) {
			earningByType += (iter1->second[i].getQuantity()
					* iter1->second[i].getPriceitem());
			earningByType += (iter2->second[i].getQuantity()
					* iter2->second[i].getPriceitem());
			earningByType += (iter3->second[i].getQuantity()
					* iter3->second[i].getPriceitem());
		}

		if (flag == 0) {
			max = earningByType;
			temp = iter1->first;
			flag = 1;
		}

		if (max < earningByType) {
			max = earningByType;
			temp = iter1->first;
		}
	}
	return temp;
}

void Company::typeIncome(mapItem store1, mapItem store2, mapItem store3) {

	double earningByType = 0;
	for (mapItem::const_iterator it1 = store1.begin(), it2 = store2.begin(),
			it3 = store3.begin();
			it1 != store1.end(), it2 != store2.end(), it3 != store3.end();
			++it1, ++it2, ++it3) {
		earningByType = 0;
		for (unsigned i = 0; i < it1->second.size(); i++) {
			earningByType += (it1->second[i].getQuantity()
					* it1->second[i].getPriceitem());
			earningByType += (it2->second[i].getQuantity()
					* it2->second[i].getPriceitem());
			earningByType += (it3->second[i].getQuantity()
					* it3->second[i].getPriceitem());
		}
		cout << it1->first << "  " << earningByType << " BGL" << endl;
	}
}

void Company::searchByType(mapItem store1, mapItem store2, mapItem store3,
		string type) {
	mapItem::const_iterator it1 = store1.find(type);
	cout << "Store 1" << endl;
	for (unsigned i = 0; i < it1->second.size(); i++) {
		it1->second[i].print();
	}
	cout << endl;
	mapItem::const_iterator it2 = store2.find(type);
	cout << "Store 2" << endl;
	for (unsigned i = 0; i < it2->second.size(); i++) {
		it2->second[i].print();
	}
	cout << endl;
	mapItem::const_iterator it3 = store3.find(type);
	cout << "Store 3" << endl;
	for (unsigned i = 0; i < it3->second.size(); i++) {
		it3->second[i].print();
	}
}
