//conditional statement
//use of else if

#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	
	if(age<12)
	{
		printf("you are child");
	}
	else if(age<=17)
	{
		printf("you are teenager");	
	}
	else
	{
		printf("you are adult");
	}
	return 0;
}
