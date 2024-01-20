//Convert years into days and months
#include<stdio.h>
int main()
{
	int years,days,months;
	printf("Enter year to convert into days and month:");
	scanf("%d",&years);
	
	days = years * 365;
	months = years *12;
	
	printf("Approximately %d months and %d days\n", months, days);
		
	return 0;
}
