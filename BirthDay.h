#ifndef DATE_H
#define DATE_H

#include<string>
#include<iostream>
using namespace std;

class Birthday
{
private:
	string lastName;
	string firstName;
	int day;
	int month;
	int year;
public:
	int getDay(){return day;}
	int getYear(){return year;}
	int getMonth(){return month;}
	string getFirstName(){return firstName;}
	string getLastName(){return lastName;}

	Birthday(string fName = "",string lName ="", int day = 0,int month = 0,int year =0);
	void print();

};

#endif