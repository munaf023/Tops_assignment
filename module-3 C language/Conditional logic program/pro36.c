//.Write a C program to input electricity unit charges and calculate total
// electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill
#include <stdio.h>

int main() 
{
    float units, bill = 0, surcharge, total_Bill;

    printf("Enter the total units of electricity consumed: ");
    scanf("%f", &units);

    if(units <= 50)
	{
        bill = units * 0.50 + 0.2;
    }
    else if(units <= 150)
	{
        bill = units * 0.75;
    }
    else if(units <= 250)
	{
        bill = units * 1.20 ;
    }
    else 
	{
        bill = units * 1.50;
    }

    surcharge = bill * 0.20;
    total_Bill = bill + surcharge;

    printf("Total electricity bill is: %2f\n", total_Bill);

    return 0;
}

