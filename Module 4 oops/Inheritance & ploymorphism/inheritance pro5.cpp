//Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)

#include<iostream>
using namespace std;
class student{
	int rollno;
	public:
		void input1()
		{
			cout<<"Enter your roll no: ";
			cin>>rollno;
		}
		void display1()
		{
			cout<<"Roll number is :"<<rollno;
		}
};
class test:public student{
		public:
			int m1,m2;
			void input2()
			{
				cout<<"Enter 2 subjects marks: ";
				cin>>m1>>m2;
			}
};
class result:public test{
	int total;
	public:
		void display3()
		{
			cout<<"Total marks are: "<<m1+m2;
		}
};
int main()
{
	result obj;
	obj.input1();
	cout<<endl;
	obj.display1();
	cout<<endl;
	obj.input2();
	cout<<endl;
	obj.display2();
	cout<<endl;
	obj.display3();
	
	return 0;
}

