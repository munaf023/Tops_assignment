//WAP to find factorial using recursion
#include<stdio.h>
int factorial(int num)
{
	if(num>1)
	{
		return num*factorial(num-1);
	}
}
int main()
{
	printf("The factorial of %d is %d",num,factorial(5));
}
