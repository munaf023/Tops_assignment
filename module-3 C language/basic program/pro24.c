//Accept 5 employees name and salary and count average and total salary 

#include <stdio.h>

int main() 
{
    char names[5][20];
    float sal[5];
    float total = 0, average;
    
    int i;

    printf("Enter the names and salaries of 5 employees:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("Employee %d name: ", i + 1);
        scanf("%c", names[i]);
        printf("Employee %d salary: ", i + 1);
        scanf("%f", &sal[i]);
        total += sal[i];
    }
	    average = total / 5;
	    printf("\nTotal salary: %2f\n", total);
	    printf("Average salary: %2f\n", average);

    return 0;
}

