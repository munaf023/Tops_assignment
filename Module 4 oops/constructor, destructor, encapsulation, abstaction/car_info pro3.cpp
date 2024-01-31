// Write a C++ program to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables.

#include<iostream>
using namespace std;
class car{
	string company;
	int year;
	string model;
	public:
		car()
		{
			cout<<"Enter your car's company name: ";
			cin>>company;
			
			cout<<"Enter your car's model number: ";
			cin>>model;
			
			cout<<"Enter your car's year: ";
			cin>>year;
		}
		void setcar()
		{
			cout<<"\nYour car name:"<<company<<"\nyour car model: "<<model<<"\nYear you bought car:"<<year;
		}
};
int main()
{
	car c1;
	c1.setcar();
	return 0;
}
