#include <iostream>
using namespace std;

int main()
{
	float year , s;
	cout<<"YEAR: ";
	cin>> year;
	s = year/4;
	s = s*4;
	cout<<s;
	
	if (s == year)
		cout<<"Leap Year"<<endl;
	else
		cout<<"Not a Leap Year";
	return 0;
}
