// Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.

#include<iostream>
using namespace std;

class person{
	string name;
	int age;
	string country;
	public:
		void getinfo()
		{
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter your age: ";
			cin>>age;
			cout<<"Enter your country name: ";
			cin>>country;
		}
		void setinfo()
		{
			cout<<"Your name is "<<name<<endl;
			cout<<"Your age is "<<age<<endl;
			cout<<"Your country name is "<<country<<endl;
		}
};
int main()
{
	person obj;
	obj.getinfo();
	obj.setinfo();
	return 0;
}
