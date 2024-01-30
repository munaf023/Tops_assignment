// Write a C++ program to implement a class called Circle that has private
// member variables for radius. Include member functions to calculate the
// circle's area and circumference.

#include<iostream>
using namespace std;
class circle{
	float radius,pi = 3.14;
	float area_of_circle,circumference_of_circle;
	
	public:
		void area()
		{
			cout<<"Enter radius: ";
			cin>>radius;
			area_of_circle = pi*radius*radius;
			cout<<"Area of circle is "<<area_of_circle;
		}
		
		void circumference()
		{
			cout<<"Enter radius: ";
			cin>>radius;
			circumference_of_circle = 2*pi*radius*radius;
			cout<<"Circumference of circle is "<<circumference_of_circle;
		}
};
int main()
{
	circle obj;
	int choice;
	cout<<"Circle Area and circumference\n";
	cout<<"1.area,2.circumference\n";
	cout<<"Enter choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			obj.area();
			break;
		case 2:
			obj.circumference();
			break;
		default:
			cout<<"Invalid choice";
			break;		
	}
	return 0;
}
