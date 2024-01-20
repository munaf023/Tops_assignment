//WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
int main()
{
	int val;
	printf("Enter a value to check weather it is negative,postivie or zero");
	scanf("%d",&val);
	
	if(val<0)
	{
		printf("Negative\n");
	}
	else if(val>0)
	{
		printf("postivie\n");
	}
	else
	{
		printf("number is zero");
	}
	
	return 0;
}
