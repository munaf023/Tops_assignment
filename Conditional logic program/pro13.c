// WAP to find minimum number among 3 numbers using ternary operator

#include<stdio.h>
int main()
{
	int n1=10,n2=21,n3=8,minimum;
	
	minimum = (n1 < n2) ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);
	
	printf("Maximum among %d ,%d and %d: %d",n1,n2,n3,minimum);
	
	return 0;
}
