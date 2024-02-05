//Write a program to swap the two numbers using friend function
//without using third variable
#include<iostream>
using namespace std;
class number{
	public:
	int x,y;
		void add()
		{
			cout<<"Enter two values: ";
			cin>> x >>y;
		}
		friend void swap(number &n);
		
};
void swap(number &n)
{
	n.x = n.x + n.y;
	n.y = n.x - n.y;
	n.x = n.x - n.y;

}
int main()
{
	number n;
	n.add();
	swap(n);
	cout << "After swapping: x = " << n.x << ", y = " << n.y << endl;
	
	return 0;
}

