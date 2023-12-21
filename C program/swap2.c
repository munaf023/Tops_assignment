//swap without third variable

#include<stdio.h>
int main()
{
	int a=10, b=20;
	printf("a is %d and b is %d"\n,a,b);
	a=a+b;//20+10=30
	b=a-b;//30-20=10
	a=a-b;//30-10=20
	
	printf("a is %d and b is %d",a,b);
	return 0;
}
