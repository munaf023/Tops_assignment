// Write a C++ program to implement a class called Date that has private 
//member variables for day, month, and year. Include member functions to 
//set and get these variables, as well as to validate if the date is valid.
#include<iostream>
using namespace std;
class date{
	int date,month,year;
	public:
		void getdata()
		{
			cout<<"Enter date: ";
			cin>>date;
			
			cout<<"Enter month: ";
			cin>>month;
			
			cout<<"Enter year: ";
			cin>>year; 
			 
			if(date > 31 || date <= 0)
			{
				cout<<"Invalid day\n";
			} 
			else{
				cout<<"Valid day\n";
			}
			
			if( month > 12 || date <= 0)
			{
				cout<<"Invalid month\n";
			} 
			else{
				cout<<"Valid month\n";
			}
			if (year > 2024 || date <=0){
				cout<<"Invalid year\n";
			} else{
				cout<<"valid year\n";
			}
		}
		void setdata()
		{
			cout<<"\nDate is :"<<date;
			cout<<"\nmonth is :"<<month;
			cout<<"\nYear is : "<<year;	
		}
};
int main()
{
	date obj;
	obj.getdata();
	obj.setdata();
	return 0;
}
