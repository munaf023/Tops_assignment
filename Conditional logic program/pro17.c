// Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>
int main()
{
	int side1,side2,side3,sum;
	printf("Enter side1:");
	scanf("%d",&side1);
	printf("Enter side2:");
	scanf("%d",&side2);
	printf("Enter side3:");
	scanf("%d",&side3);
	
	sum = side1+side2+side3;
	
	if(sum == 180)
	{
		printf("Triangle is valid");	
	}
	else 
	{
		printf("Invalid Triangle");
	}
	
	return 0;
}
