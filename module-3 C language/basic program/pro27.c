//Convert days into months

#include<stdio.h>
int main()
{
	int days;
	float months;
	printf("Enter number of days:");
	scanf("%d",&days);
	
	months = days/30.50;
	
	printf("Approximately %.2f months\n", months);
	return 0;
}
