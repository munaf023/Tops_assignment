// Write a program to find the multiplication values and the cubic values using 
//inline function
#include<iostream>
using namespace std;
class a{
	public:
		int x,y;
		inline void multi()
		{
			cout<<"Enter 2 value: ";
			cin>>x>>y;
			
			cout<<"Multiplication is : "<<x*y<<endl;
		}
		int a;
		inline void cube()
		{
			cout<<"Enter value of x: ";
			cin>>a;
			
			cout<<"Cube is :"<<a*a*a;
		}
};
int main()
{
	a obj;
	obj.multi();
	obj.cube();
	return 0;
}
