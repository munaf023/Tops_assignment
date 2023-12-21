// condition statement 

#include<stdio.h>

int main()
{
	int sub;
	printf("List of subject you have passed has givien below\n:");
	printf("1.Science \n,2.Maths \n,3.Maths and Science\n");
	printf("Choose only one subject:");
	scanf("%d",&sub);
	
	if(sub==1)
	{	
		printf("You have won 1500");
	}
	else if(sub==2)
	{
		printf("you have won 2000");
	}
	else if(sub==3)
	{
		printf("you have won 3000");
	}
	else
	{
		printf("you have made invalid choice");
	}
	
	return 0;
}
