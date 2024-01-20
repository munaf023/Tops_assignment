//WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers

#include <stdio.h>

int main()
{
    int num[10];
    int i, evenCount = 0, oddCount = 0, sumEven = 0, sumOdd = 0;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0)
		{
            evenCount++;
            sumEven += num[i];
        }
		else
		{
            oddCount++;
            sumOdd += num[i];
        }
    }

    printf("\nResults:\n");
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}

