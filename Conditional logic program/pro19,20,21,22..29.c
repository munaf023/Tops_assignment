//Write a program in C to calculate and print the electricity bill of a given.
// The customer ID, name, and unit consumed by the user should
// be captured from the keyboard to display the total amount to be paid to the customer

#include<stdio.h>
int main()
{
	int unit;
	printf("Enter unit to know amount:");
	scanf("%d",&unit);
	
	if(unit<350)
	{
		printf("your bill is @1.20rs");
	}
	else if((unit>350) && (unit<600))
	{
		printf("your bill is @1.50rs");	
	}
	else if((unit>600)&&(unit<800))
	{
		printf("Your bill is @1.80rs");	
	}
	else if(unit>=800)
	{
		printf("Your bill is @2.00rs");
	}
	else
	{
		printf("Entered invalid number");
	}
	return 0;
}
