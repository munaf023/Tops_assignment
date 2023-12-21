// simple interest 

#include<stdio.h>

int main()
{
	float p,r,n,i;
	
	printf("Enter amount loan:\n");
	printf("Enter rate of int:\n");
	printf("Enter no. of years:\n");	
	
	scanf("%f",&p);
	scanf("%f",&r);
	scanf("%f",&n);
	
	i =(p*r*n)/100;
	printf("interest is :%f",p,r,n,i);
	return 0;
}
