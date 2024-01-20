// WAP to make simple calculator (operation include Addition, Subtraction,
// Multiplication, Division, modulo) using conditional statement

#include<stdio.h>
int main()
{
	int a,b,result;
	char ch;
	printf("Enter value (+,-,*,/,%):");
	scanf("%c",&ch);
	printf("Enter first value:");
	scanf("%d",&a);
	printf("Enter Second value:");
	scanf("%d",&b);
	
	if(ch=='+')
	{
		result = a + b;
		printf("Addition of %d and %d is:%d",a,b,result);
	}
	else if(ch=='-')
	{
		result = a - b;
		printf("Subtraction of %d and %d is:%d",a,b,result);
	}
	else if(ch=='*')
	{
		result = a * b;
		printf("Multiplication of %d and %d is:%d",a,b,result);
	}
	else if(ch=='/')
	{
		result = a / b;
		printf("division of %d and %d is:%d",a,b,result);
	}
	else if(ch=='%')
	{
		result = a % b;
		printf("module of %d and %d is:%d",a,b,result);
		
	}
	else
	{
		printf("You have enter wrong value");
	}
	
	return 0;
}
