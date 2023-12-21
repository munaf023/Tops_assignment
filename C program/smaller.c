// which is smaller 
#include<stdio.h>

int main()
{
	int num1;
	printf("Enter 1st number");
	scanf("%d",&num1);
	
	int num2;
	printf("Enter 2nd number");
	scanf("%d",&num2);
	
	if(num1<num2)
	{
		printf("Num1 is smaller");
	}
	else
	{
		printf("Num2 is smaller");
	}
	return 0;
}

