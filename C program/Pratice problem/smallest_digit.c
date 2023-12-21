//find smallest digit number

#include<stdio.h>

int main()
{
	int no1;
	printf("enter your first number:");
	scanf("%d",&no1);
	
	int no2;
	printf("enter your second number:");
	scanf("%d",&no2);
	
	if(no1<no2)
	{
		printf("%d is smallest",no1);
	}
	else
	{
		printf("%d is smallest",no2);
	}

	return 0;
	
}
