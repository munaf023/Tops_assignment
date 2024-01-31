//Write a C++ Program to show access to Private Public and Protected using
//Inheritance
#include<iostream>
using namespace std;
class A{
	private:
    int pvt = 1;
	protected:
    int prot = 2; 
	public:
    int pub = 3; 

    int getPVT()
	{
        return pvt;
    }
};

class B : public A{
	public:
    int getProt() 
	{
        return prot;
    }
};

int main()
{
    B object1;
    cout << "Private = " << object1.getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.pub << endl;
    return 0;
}

