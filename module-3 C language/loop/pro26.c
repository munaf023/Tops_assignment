//. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>

int main()
{
    int i,n,j,sum = 0,innersum=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
      
        for (j = 1; j <= i; ++j) {
            innersum += j;
        }
        sum += innersum;
    }

    printf("The sum of the series (1) + (1+2) + (1+2+3) + ... + (1+2+3+...+n) is: %d\n", sum);

    return 0;
}

