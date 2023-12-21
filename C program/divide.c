//divide

#include<stdio.h>
int main()
{
	int no1;
	printf("enter first number:");
	scanf("%d",&no1);
	
	int no2;
	printf("enter second number:");
	scanf("%d",&no2);
	 
	int result;
	result = no1 / no2;
	printf("Result %d / %d = %d",no1,no2,result);
	
	return 0;
}
