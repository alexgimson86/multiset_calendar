#include"MultiSet.h"
#include "Calendar.h"
#include"BirthDay.h"
#include<string>
Calendar::Calendar(string fName,string lName,int m,int n,int y):
		          set(fName,lName,m,n,y)
{}
void Calendar::menu()
{
	int choice;
	
	do 
	{
		cout<<"1. Find person by name.\n";
		cout<<"2. Find person by Birthday.\n";
		cout<<"3. Find all the birthdays in the month.\n";
		cout<<"4. Add to list.\n";
		cout<<"5. Save Calendar.\n";
		cout<<"6. Quit.\n\n";
		cin>>choice;

		if(choice >6 && choice <1)
			cout<<"Sorry "<<choice<<" is not a valid option ";
		switch(choice)
		{
		case 1: 
			searchByName();
			break;
		case 2:
			searchByBirthDay();
			break;
		case 3:
			searchByMonth();
			break;
		case 4:
			addToList();
			break;
		/*case 5:
			saveCalendar();
			break;*/
	}

	}while(choice!=6);
}

void Calendar::searchByName()
{
	string fName,lName="";

	cout<<"enter the persons name: ";
	cin>>fName>>lName;
	
	Birthday boyOne(fName,lName);
	Birthday *boy = &boyOne;

	set.searchByName(boy);
}
void Calendar::addToList()
{
	string firstName, lastName;
	int d,m,y;

	cout<<"enter the persons name: ";
	cin>>firstName>>lastName;
	cout<<endl;
	cout<<"enter their birthdate: ";
	cin>>d>>m>>y;

	Birthday *boy = new Birthday(firstName,lastName,d,m,y);
	set.addToList(boy);
}
void Calendar::searchByBirthDay()
{
	int d,m,y=0;

	cout<<"enter the persons birthday: ";
	cin>>d>>m>>y;
	
	Birthday boyOne("","",d,m,y);
	Birthday *boy = &boyOne;

	set.searchByBirthday(boy);
}
void Calendar::searchByMonth()
{
	int m;
	cout<<"enter the month that you would like to search:";
	cin>>m;
	cout<<endl;
	Birthday * b = &Birthday("","",m);
	
	set.searchByMonth(b);
}
