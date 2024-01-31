// Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class lenght{
	public:
	int lenght;
		void len()
		{
			cout<<"Enter lenght: ";
			cin>>lenght;
		}
};
class breath{
	public:
	int breath;
		void br()
		{
			cout<<"Enter breath: ";
			cin>>breath;
		}
};

class rect: public lenght,public breath{
	public:
		void area()
		{
			cout<<"Area of rectangle: "<<lenght*breath;
		}
};
int main()
{
	rect r1;
	r1.len();
	r1.br();
	r1.area();
	return 0;
}
