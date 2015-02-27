#include<iostream>
#include<set>
#include<iterator>
#include<string>
#include<algorithm>

#include"MultiSet.h"
#include"BirthDay.h"

using namespace std;

MultiSet::MultiSet(string fName,string lName,int d,int m, int y):dateAndName(fName,lName,d,m,y)
{
}
void MultiSet::searchByName( Birthday *a)
{
	multiset<Birthday*,CompareName>::iterator result;

	result=nameSet.find(a);

	if(result!=nameSet.end())
	{
		cout<<endl;
		(*result)->print();
		cout<<endl;
	}
	else
		cout<<"Person not found. "<<endl;
}
void MultiSet::addToList(Birthday *a)
{
	nameSet.insert(a);
	dateSet.insert(a);
	monthSet.insert(a);
}
void MultiSet::print()
{
	dateAndName.print();
}
void MultiSet::searchByBirthday(Birthday *a)
{
	multiset<Birthday*,CompareDate>::iterator result;

	result=dateSet.find(a);

	if(result!=dateSet.end())
	{
		cout<<endl;
		(*result)->print();
		cout<<endl;
	}
	else
		cout<<"Person not found. "<<endl;

}
void MultiSet::searchByMonth(Birthday *a)
{
	pair<multiset<Birthday*,CompareMonth>::iterator, multiset<Birthday*,CompareMonth>::iterator>p;

	p=monthSet.equal_range(a);

	if(p.first!=monthSet.end())
	{
		while(p.first !=p.second)
		{
			(*p.first)->print();
			cout<<endl<<endl;
			p.first++;
		}
	}
	else
		cout<<"No birthdays found. "<<endl;
}