//write a program to calculate perimeter of rectangle. Take sides a,b from user

#include<stdio.h>

int main()
{
	int side1;
	printf("enter side1 :");
	scanf("%d",&side1);
	int side2;
	printf("enter side2 :");
	scanf("%d",&side2);
	
	printf("perimeter of rectangle: %d\n",2 * side1 + side2);
	
	return 0;
}
