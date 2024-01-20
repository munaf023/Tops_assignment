// Calculate compound interest (Compound Interest formula:
// a. Formula to calculate compound interest annually is given by:
// Amount= P(1 + R/100)t
// b. Compound Interest = Amount – P

#include<stdio.h>
int main()
{
	int amt,pri,rate,time,ci;
	printf("Enter principle amount:");
	scanf("%d",&pri);
	
	printf("Enter rate of interest:");
	scanf("%d",&rate);
	
	printf("Enter time:");
	scanf("%d",&time);
	
	
	amt = pri * ((1+rate/100),time);
	ci = amt - pri;
	
	printf("Your Compound interest is: %d",ci);
	
	return 0;
}

