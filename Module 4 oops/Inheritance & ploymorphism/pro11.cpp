//Write a program to calculate the area of circle, rectangle and triangle
//using Function Overloading
//Rectangle: Area * breadth
//Triangle: ½ *Area* breadth
//Circle: Pi * Area *Area
#include<iostream>
using namespace std;
class cal{
	int n1,n2,result;
	public:
		void area(int l,int w)
		{
			cout<<l*w;
		}
		void area(double r)
		{
			cout<<3.14*r*r;
		}
		void area(double h,double b)
		{
			cout<<0.5*h*b;
		}
};
int main()
{
	cal c1;
	int choice;
	cout<<"1 for rectangle\n2 for circle\n3 for triangle\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			c1.area(5,4);
			break;
		case 2:	
			c1.area(6.6);
			break;
		case 3:
			c1.area(2.4,7.8);
			break;
		default:
			cout<<"Invalid";
	}
	return 0;
}
