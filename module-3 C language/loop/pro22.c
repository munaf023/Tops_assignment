// C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
int main()
{
	int no,rev=0,rem;
	int temp = no;
	printf("Enter number:");
	scanf("%d",&no);
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
		printf("%d is reverse of %d",rev,temp);
	return 0;
}
