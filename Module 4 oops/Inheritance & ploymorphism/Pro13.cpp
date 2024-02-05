//Write a program to find the max number from given two numbers
//using friend function
#include<iostream>
using namespace std;
class num{
	public:
		int x,y;
		void input()
		{
			cout<<"Enter two number: ";
			cin>> x >> y;
		}
		friend void	add_data(num);
};
void add_data(num t)
{
	if(t.x > t.y) 
	{
		cout<<"Largest number is "<<t.x;
	}
	else 
	{
		cout<<"Largest number is "<<t.y;
	}
}
int main()
{
	num t;
	t.input();
	add_data(t);
	return 0;
}
