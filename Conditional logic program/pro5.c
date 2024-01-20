// Check Number Is Positive or Negative

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
