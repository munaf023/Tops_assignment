//Write a C program to accept two integers and check whether they are equal or not
 
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter Second number:");
	scanf("%d",&num2);
	
	if(num1>num2)
	{
		printf("First number is greater");
	}
	else if(num2<num1)
	{
		printf("Second number is greater");
	}
	else if(num1==num2)
	{
		printf("Both are equal");
	}
	else
	{
		printf("Invalid");
	}
	
	return 0;
}
