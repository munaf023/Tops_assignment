#include <stdio.h>

int main()
{
    int n,i, sum = 0;


    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("The sum of the series 1 + 2 + 3 + ... + %d is: %d\n", n, sum);

    return 0;
}

