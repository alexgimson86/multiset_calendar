#ifndef CALENDAR_H
#define CALENDAR_H

#include"MultiSet.h"

#include<set>
#include<iterator>
#include<string>

class Calendar
{
public:
	Calendar(string fName,string lName,int d,int m, int y);
	void menu();
	void searchByName();
	void addToList();
	void searchByBirthDay();
	void searchByMonth();
	//void saveCalendar();*/
private:
	MultiSet set;
};
#endif









