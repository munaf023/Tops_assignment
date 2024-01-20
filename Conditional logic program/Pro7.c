// Accept marks from user and check pass or fail

#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks to know if you are pass or fail:");
	scanf("%d",&marks);
	
	if(marks<=30)
	{
		printf("Fail");
	}
	else if(marks>30 && marks <= 100)
	{
		printf("Pass");
	}
	else
	{
		printf("Enter valid number");
	}
	
	return 0;
}
