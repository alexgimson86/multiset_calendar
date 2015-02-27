#ifndef MULTISET_H
#define MULTISET_H

#include"BirthDay.h"

#include<set>
#include<iterator>
#include<iostream>
#include<string>

using namespace std;

class MultiSet
{
public:
	MultiSet(string fName,string lName,int d,int m, int y);
	MultiSet(){};
	void print();
	void addToList(Birthday *);
	void searchByBirthday(Birthday *);
	void searchByName(Birthday *);
	void searchByMonth(Birthday *);

	friend class CompareDate;
	class CompareDate
	{
	public:
		bool operator()(Birthday *a,Birthday *b)
		{

			return (a->getDay() < b->getDay());
		}
	};
	friend class CompareMonth;
	class CompareMonth
	{
	public:
		bool operator()(Birthday *a,Birthday *b)
		{

			return (a->getMonth() < b->getMonth());
		}
	};
	friend class CompareName;
	class CompareName
	{
	public:
		bool operator()(Birthday* a,Birthday *b)
		{
			return (a->getFirstName()<b->getFirstName());
		}
	};
private:
	typedef multiset<Birthday *,CompareDate>DateSet;
	typedef multiset<Birthday * ,CompareName>NameSet;
	typedef multiset<Birthday *,CompareMonth>MonthSet;
	Birthday dateAndName;
	DateSet dateSet;
	NameSet nameSet;
	MonthSet monthSet;
};

#endif



	