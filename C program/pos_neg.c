// Program to display a number if it is negative

#include<stdio.h>

int main()
{
	
	int num;
	printf("enter a number:\n");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("Negative\n");
	}
	else
	{
		printf("positive");
	}
	
	return 0;
}
