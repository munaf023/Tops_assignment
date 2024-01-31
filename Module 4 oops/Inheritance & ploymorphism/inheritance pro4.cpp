// Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;
class marks{
	public:
	int m1,m2,m3,m4,m5;
	
		void input1()
		{
			cout<<"Enter marks of 5 subjects: ";
			cin>>m1>>m2>>m3>>m4>>m5;
		}
		int total;
		float pr;
		void display2()
		{
			total = (m1+m2+m3+m4+m5);
			pr = total / 5; 
			cout<<"Total marks are: "<<m1+m2+m3+m4+m5<<endl;
		}
		
};
class total{
	public:
				
};
class result:public marks, public total{
	public:
		void display3()
		{
			cout<<"percentage are: "<<pr;
		}
};
int main()
{
	result r1;
	r1.input1();
	r1.display2();
	r1.display3();
	return 0;
}
