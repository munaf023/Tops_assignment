//WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
	int years,days;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    days = years * 365;

    printf("%d years is approximately %d days\n", years, days);

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;

    printf("%d days is approximately %d years\n", days, years);
	
	return 0;
}
