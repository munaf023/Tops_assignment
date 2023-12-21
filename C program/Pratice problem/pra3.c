//postivie,negative and zero

#include<stdio.h>
int main()
{
	int num;
	printf("Enter number to check weather it is postivie, negative and zero:");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("Postivie");
	}
	else if(num<0)
	{
		printf("Negative");
	}
	else if(num==0)
	{
		printf("Equal");	
	}
	return 0;	
} 
