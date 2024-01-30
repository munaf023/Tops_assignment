//calculator
#include<iostream>
using namespace std;
class calculator{
	
	int n1,n2,sum;
	public:
		void add()
		{
			cout<<"Enter 1st number: ";
			cin>>n1;
			cout<<"Enter 2nd number: ";
	    	cin>>n2;
	    	sum = n1 + n2;
			cout<<"Addition of "<< n1 <<" + "<< n2 <<" = "<<sum;
		}
		void subtract()
		{
			cout<<"Enter 1st number: ";
			cin>>n1;
			cout<<"Enter 2nd number: ";
	    	cin>>n2;
	    	sum = n1 - n2;
			cout<<"subtraction of "<< n1 <<" - "<< n2 <<" = "<<sum;
		}
		void multiplication()
		{
			cout<<"Enter 1st number: ";
			cin>>n1;
			cout<<"Enter 2nd number: ";
	    	cin>>n2;
	    	sum = n1 * n2;
			cout<<"Multiplication of "<< n1 <<" * "<<n2<<" = "<<sum;
		}
		void division()
		{
			cout<<"Enter 1st number: ";
			cin>>n1;
			cout<<"Enter 2nd number: ";
	    	cin>>n2;
	    	sum = n1 / n2;
			cout<<"Division of "<< n1 <<" / "<< n2 <<" = "<<sum;
		}
};
int main()
{
	calculator obj;
	int choice;
	cout<<"_______Calculator_in_c++______\n";
	cout<<"1.Addition,2.Subtraction,3.Multiplication,4.division\n";
	cout<<"Enter your choice: \n";
	
	cin>>choice;
	switch(choice)
	{
		case 1:
			obj.add();
			break;
		case 2:
			obj.subtract();
			break;
		case 3:
			obj.multiplication();
			break;
		case 4:
			obj.division();
			break;
		default:
			cout<<"Invalid choice try again\n";
			break;				
	}
	
	return 0;
}
