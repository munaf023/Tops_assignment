// Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.

#include<iostream>
using namespace std;
class rect{
	int lenght,width,area_of_rect,perimeter_of_rect;
	
	public:
		void area()
		{
			cout<<"Enter lenght: ";
			cin>>lenght;
			cout<<"Enter width: ";
			cin>>width;
			area_of_rect = lenght * width;
			cout<<"Area of rectangle : "<<area_of_rect; 
		}
		
		void perimeter()
		{
			cout<<"Enter lenght: ";
			cin>>lenght;
			cout<<"Enter width: ";
			cin>>width;
			perimeter_of_rect = (lenght + width)*2;
			cout<<"Area of rectangle : "<<perimeter_of_rect; 
		}
};
int main()
{
	rect obj;
	int choice;
	cout<<"Rectangle Area and perimeter\n";
	cout<<"1.area,2.perimeter\n";
	cout<<"Enter choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			obj.area();
			break;
		case 2:
			obj.perimeter();
			break;
		default:
			cout<<"Invalid choice";
			break;		
	}
	return 0;
}
