//Calculate person’s Annual salary

#include<stdio.h>

int main()
{
    
    float monthlySalary;
    
    printf("Enter the monthly salary: ");
    scanf("%f", &monthlySalary);

    float annualSalary = monthlySalary * 12;

    printf("The annual salary is: %.2f\n", annualSalary);

    return 0;
}

