// WAP to print factorial of given number

#include<stdio.h>
int main()
{
	int n,i, fact=1;
	printf("Enter a number to get factorial: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact = fact * i;
	}
	
	printf("Factorial is : %d",fact);
	
	return 0;
}
