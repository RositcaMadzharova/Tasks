/*
 * Student.cpp
 *
 *  Created on: Apr 6, 2017
 *      Author: Rossy
 */

#include "Student.h"

Student::Student(string firstName, string lastName, string egn, int year, string studies, int grades[]){
	this->firstName = firstName;
	this->lastName = lastName;
	setEgn(egn);
	this->year = year;
	this->studies = studies;

	for (int i=0; i<=10; i++){
		this->grades[i] = grades[i];
	}

}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

string Student::getEgn() const {
	return egn;
}

void Student::setEgn(string egn) {
	this->egn = egn;
}

const string& Student::getFirstName() const {
	return firstName;
}

void Student::setFirstName(const string& firstName) {
	this->firstName = firstName;
}


const string& Student::getLastName() const {
	return lastName;
}

void Student::setLastName(const string& lastName) {
	this->lastName = lastName;
}

const string& Student::getStudies() const {
	return studies;
}

void Student::setStudies(const string& studies) {
	this->studies = studies;
}

int Student::getYear() const {
	return year;
}

void Student::setYear(int year) {
	this->year = year;
}

void Student::printInfo() {
	cout << "Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "EGN: " << getEgn() << endl;
	cout << "Year: " << getYear() << endl;
	cout << "Studies: " << getStudies() << endl;
	cout << "Grades: ";
	for(int i=0; i<10; i++){
		cout << grades[i] << " ";
	}
}

float Student::gradeAverage() {
	int sum = 0;
	float average;
	for (int i=0; i<10; i++){
		sum=sum+grades[i];

	}
	average=sum/10;
		return average;

}

int Student::gradeMax() {
	int max=grades[0];
	for (int i=1; i<10;i++){
		if (grades[i]>max){
			max=grades[i];
		}
	}
	return max;
}

int Student::gradeMin() {
	int min=grades[0];
		for (int i=1; i<10;i++){
			if (grades[i]<min){
				min=grades[i];
			}
		}
		return min;
}

int Student::countSix() {
	int count=0;
	for (int i=0; i<10; i++){
		if (grades[i]==2){
			count++;
		}
	}
	return count;
}

int Student::countTwo() {
	int count1=0;
		for (int i=0; i<10; i++){
			if (grades[i]==6){
				count1++;
			}
		}
		return count1;
}
