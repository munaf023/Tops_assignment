//Take value from user and check value is positive,negativr or zero

#include<stdio.h>
int main()
{
	int num;
	printf("Enter your value:");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("Negative\n");
	}
	else if(num>0)
	{
		printf("postivie\n");
	}
	else
	{
		printf("number is zero");
	}
	
	return 0;
}
