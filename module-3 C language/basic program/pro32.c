//Accept 2 numbers and find out its sum check it size
#include<stdio.h>

int main()
{
	int n1,n2,sum;
	printf("Enter your first number:");
	scanf("%d",&n1);
	
	printf("Enter your Second number:");
	scanf("%d",&n2);
	
	sum = n1+n2;
	sizeof(sum);
	printf("Sum of %d and %d is: %d\n", n1, n2, sum);
	
	
	return 0;
}
