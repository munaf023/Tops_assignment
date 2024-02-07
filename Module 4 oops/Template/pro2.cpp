//template
#include<iostream>
using namespace std;
template <typename T>
T max_num(T no1,T no2)
{
	if(no1>no2)
	{
		return no1;
	}
	else 
	{
		return no2;
	}
}
int main()
{
	cout<<"int value is"<<max<int>(3,5)<<endl;
	cout<<"float valus is"<<max<float>(3.5,5.5)<<endl;
	cout<<"Char value is"<<max<char>('m','s');
	return 0;
}
