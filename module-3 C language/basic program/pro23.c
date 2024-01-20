//WAP to calculate swap 2 numbers with using of multiplication and division

#include<stdio.h>
int main()
{
	int no1,no2;
	printf("Enter your first number: ");
	scanf("%d",&no1);
	
	printf("Enter your second number: ");
	scanf("%d",&no2);
	
	no1 = no1 * no2;
	no2 = no1 / no2;
	no1	= no1 / no2;
	
	printf("first number:%d\n",no1);
	printf("Second number:%d",no2);
	
	return 0;
}
