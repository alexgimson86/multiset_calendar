#include"BirthDay.h"

Birthday::Birthday(string fName,string lName,int m,int d,int y):
				   firstName(fName),lastName(lName),day(d),month(m),year(y)
{
}
void Birthday::print()
{
	cout<<firstName<<" "<<lastName<<endl;
	cout<<month<<"/"<<day<<"/"<<year<<endl;
}

