// Accept 2 numbers from user and swap 2 numbers with using 3rd variable
// and without using 3rd variable

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter your first number: ");
	scanf("%d",&a);
	
	printf("Enter your second number: ");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);
	
	return 0;
}
