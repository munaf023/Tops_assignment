// Write a C++ program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;
class triangle{
	int side1,side2,side3;
	public:
		void area()
		{
			cout<<"Enter side One of triangle: ";
			cin>>side1;
			
			cout<<"Enter side Two of triangle: ";
			cin>>side2;
			
			cout<<"Enter side Three of triangle: ";
			cin>>side3;
			
			if(side1==side2 || side2==side3)
			{
				cout<<"Equilateral";	
			}
			else if(side1!=side2 || side2!=side3)
			{
				cout<<"scalene";
			}
			else	{
				cout<<"isosceles";
			}
		}
};
int main()
{
	triangle obj;
	obj.area();
	return 0;
}
