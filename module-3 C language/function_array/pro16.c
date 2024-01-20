//Accept 5 numbers from user and perform sum of array
#include <stdio.h>

int main() {
    int numbers[5];
    int i,sum = 0;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        sum += numbers[i];
    }

    
    printf("\nEntered Numbers:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d\n", numbers[i]);
    }


    printf("\nSum of the Numbers: %d\n", sum);

    return 0;
}

