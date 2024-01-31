// Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)

#include<iostream>
using namespace std;
class person{
	string name;
	char age;
	public:
		void input_data1()
		{
			cout<<"Enter name: ";
			cin>>name;
			
			cout<<"Enter age: ";
			cin>>age;
		}
		void display()
		{
			cout<<"Name is "<<name;
			cout<<"Age is "<<age;
		}
};
class stud{
	public:
	float percentage;
	
		void input_data2()
		{
			cout<<"Enter percentage: ";
			cin>>percentage;
		}
		void display2()
		{
			cout<<"Percentage is :"<<percentage;
		}
	
};
class teacher:public person, public stud{
	public:
		int sal;
			void input_data3()
			{
				cout<<"Enter techer's salary: ";
				cin>>sal;
			 }
			 void display3()
			 {
			 	cout<<"Teacher's salary: "<<sal;
			 }
};
int main()
{
	teacher t1;
	t1.input_data1();
	t1.input_data2();
	t1.input_data3();
	t1.display();
	t1.display2();
	t1.display3();
	return 0;
}
