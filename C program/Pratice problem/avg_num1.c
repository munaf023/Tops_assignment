#include<stdio.h>

//Write a program to print the average of 3 numbers

int main()
{
	int num1,num2,num3;
	float avg;
	
	printf("Enter three numbers: ");
	scanf("%d %d %d",&num1 ,&num2 ,&num3);
	
	avg = average(num1,num2,num3);
	printf("Average of %d %d and %d is : %f", num1, num2, num3 ,avg);
	
	return 0;
}
