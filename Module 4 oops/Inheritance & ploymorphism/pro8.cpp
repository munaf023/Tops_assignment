// Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading
#include<iostream>
using namespace std;
class cal{
	int no1,no2,result;
	public:
		void add(int n1,int n2)
		{
			cout<<n1+n2;
		}
		void sub(float a1,float a2)
		{
			cout<<a1-a2;
		}
		void multi(double d1,double d2)
		{
			cout<<d1*d2;
		}
		void div(double t1,double t2)
		{
			cout<<t1/t2;
		}
};
int main()
{
	cal c1;
	int choice;
	cout<<"Enter your choice  1 = addition, 2 = Subtraction, 3 = multiplication, 4 = divide: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			c1.add(10,20);
			break;
		case 2:
			c1.sub(20,15);
			break;	
		case 3:
			c1.multi(10,5);
			break;
		case 4:
			c1.div(10,2);
			break;
		default:
			cout<<"Invalid";			
	}
	return 0;
}
