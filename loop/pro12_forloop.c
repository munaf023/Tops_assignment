//Program of Armstrong Number in C Using For Loop & While Loop
#include <stdio.h>
#include <math.h>

int main() 
{
    int num, originalNum, remainder, n = 0;
    int result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;

    for (; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
