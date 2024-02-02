//write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructor

#include<iostream>
using namespace std;
class employee{
	public:
	string name;
	int emp_id,sal;
	
		employee()
		{
			cout<<"Enter name: ";
			cin>>name;
			
			cout<<"Enter employpee id: ";
			cin>>emp_id;
			
			cout<<"Enter salary: ";
			cin>>sal;
			
			if(sal<=20000)
			{
				cout<<"performance is low";
			}
			else if(sal<=40000)
			{
				cout<<"Performace is intermidate";
			}
			else
			{
				cout<<"performance is best";
			}
		}
};
int main()
{
	employee obj;
	
	return 0;
}
