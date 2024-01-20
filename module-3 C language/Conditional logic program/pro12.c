// WAP to find maximum number among 3 numbers using ternary operator

#include<stdio.h>
int main()
{
	int n1=10,n2=21,n3=8,maximum;
	
	maximum = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
	
	printf("Maximum among %d ,%d and %d: %d",n1,n2,n3,maximum);
	
	return 0;
}
