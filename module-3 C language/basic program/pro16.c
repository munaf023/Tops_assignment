//Calculate person’s insurance premium based on salary

#include <stdio.h>

int main()
 {
    float salary, premium;
    printf("Enter your salary: ");
    scanf("%f", &salary);

    if (salary < 5000) 
	{
        premium = salary * 0.02; 
    }
	else if (salary >= 5000 && salary < 10000)
	{
        premium = salary * 0.04; 
    } 
	else
	{
        premium = salary * 0.06;
    }
    printf("Your insurance premium is:RS%2f", premium);

    return 0;
}

