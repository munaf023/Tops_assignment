//check weather it is odd or even

#include<stdio.h>
int main()
{
	int num;
	printf("Enter number to check weather it is odd or even:");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("%d is even",num);
	}
	else
	{
		printf("%d is odd",num);
	}
		
	return 0;
}
