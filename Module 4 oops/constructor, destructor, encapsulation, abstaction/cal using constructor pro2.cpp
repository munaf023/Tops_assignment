// Write a program of Addition, Subtraction, Division, Multiplication using
//constructor.

#include<iostream>
using namespace std;

class cal{
	int num1,num2;
	
	public:
		cal(int n1,int n2)
		{
			num1 = n1;
			num2 = n2;
		}
		double add()
		{
			return num1 + num2;
		}
		double sub()
		{
			return num1 - num2;
		}
		double multiplication()
		{
			return num1 * num2;
		}
		double division()
		{
			if(num2 != 0)
			{
				return num1/num2;
			}else
			{
				cout<<"Cannot be divide by zero"<<endl;
			}
		}
	
};
int main()
{
	int num1,num2;
	cout<<"Enter two values: ";
	cin>>num1>>num2;
	
	cal obj(num1,num2);
	
	cout<<"Sum of: "<<obj.add()<<endl;
	cout<<"Subtraction of: "<<obj.sub()<<endl;
	cout<<"Multiplication of: "<<obj.multiplication()<<endl;
	cout<<"Division of: "<< obj.division()<<endl;
	return 0;
}
