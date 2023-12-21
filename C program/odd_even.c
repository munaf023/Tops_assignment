// Check givien number is odd or even
#include<stdio.h>

int main()
{
	int num;
	printf("Enter number to check odd or even:\n");
	scanf("%d",&num);
		
	if(num % 2 == 0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	
	
	return 0;
}
