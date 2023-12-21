//Check weather number is divisible by 5 or 11

#include<stdio.h>
int main()
{
	int num;
	printf("Enter number is divisible by 5 or 11:");
	scanf("%d",&num);
	
	if ((num%5==0) && (num%11==0))
	{
		printf("Number is divisble",num);	
	}	
	else
	{
		printf("Number is not divible by 5 or 11",num);
	}
	
	return 0;
}
