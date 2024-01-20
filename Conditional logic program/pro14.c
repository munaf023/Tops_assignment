// WAP to find the largest of three numbers

#include<stdio.h>

int main()
{
	int num1 = 50,num2 = 40,num3 = 26;
	
	if((num1>num2) && (num1>num3))
	{
		printf("Num1 is greater");
	}
	else if((num2<num1) && (num2>num3))
	{
		printf("num2 is greater");
	}
	else if((num3<num2) && (num3<num1))
	{
		printf("num3 is greater");
	}
	
	return 0;
}
