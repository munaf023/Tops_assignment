//print number of day enter by the user

#include<stdio.h>
int main()
{
	int day;
	printf("Enter a day of week to check which day it is(0-7):");
	scanf("%d",&day);
	
	if(day==1)
	{
		printf("Monday");
	}
	else if(day==2)
	{
		printf("Tuseday");
	}
	else if(day==3)
	{
		printf("wednesday");
	}
	else if(day==4)
	{
		printf("Thursday");
	}
	else if(day==5)
	{
		printf("Friday");
	}
	else if(day==6)
	{
		printf("Saturday");
	}
	else if(day==7)
	{
		printf("Sunday");
	}
	else
	{
		printf("Enter a valid number");
	}
	
	return 0;
}
