// Calculate compound interest 

#include<stdio.h>
#include<math.h>
int main()
{
	float principal,rate,time,cp;
	
	printf("Enter value of principle:");
	scanf("%d",&principal);
	
	printf("Enter value of rate:");
	scanf("%d",&rate);
	
	printf("Enter value of time:");
	scanf("%d",&time);
	
	rate = rate / 100;
	
	cp = principal * pow(1 + rate, time) - principal;
	
	printf("Compound interest is:%2f",cp);
	return 0;
}
