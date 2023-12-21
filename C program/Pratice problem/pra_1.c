//take year from user and find it is minimum or maximum

#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter two number:");
	scanf("%d %d",&num1,&num2);
	
	if(num1>num2)
	{
		printf("%d is maximum",num1);
	}
	else if(num1<num2)
	{
		printf("%d is maximum",num2);
	}
	else
	{
		printf("Both are equal");
	}
	
	
	return 0;
}
