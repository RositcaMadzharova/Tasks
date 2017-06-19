/*
 * Student.h
 *
 *  Created on: Apr 6, 2017
 *      Author: Rossy
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include<iostream>
using namespace std;


class Student {
private:
	string firstName;
	string lastName;
	string egn;
	int year;
	string studies;
	int grades[10];
public:
	Student(string, string, string, int, string, int[]);
	virtual ~Student();
	string getEgn() const;
	void setEgn(string egn);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	const string& getStudies() const;
	void setStudies(const string& studies);
	int getYear() const;
	void setYear(int year);
	void printInfo();
	float gradeAverage();
	int gradeMax();
	int gradeMin();
	int countSix();
	int countTwo();

};

#endif /* STUDENT_H_ */
