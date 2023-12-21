#include<stdio.h>
int main()
{
	int a = 5, b = 8;
	printf("Before swap: a is %d and b is %d", a,b);
	
	int c;
	c=a;//a=5 c=5
	a=b;//b=8 a=8
	b=c;//b=5 c=5 
	printf("\nAfter swap: a is %d and b is %d", a,b);
	return 0;
	
}

