// Accept 2 numbers from user and swap 2 numbers with using 3rd variable
// and without using 3rd variable

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter your first number: ");
	scanf("%d",&a);
	
	printf("Enter your second number: ");
	scanf("%d",&b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("First number: %d\n", a);
    printf("Second number: %d\n", b);
	
	
	return 0;
}
