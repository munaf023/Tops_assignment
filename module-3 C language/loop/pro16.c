//Calculate the Sum of Natural Numbers Using the While

#include <stdio.h>
int main()
{
    int n, count = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (count <= n) 
	{
        sum += count;
        count++;
    }

    printf("The sum of natural numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
