//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("First three powers of %d are: %d, %d, %d\n", num, num, (int)pow(num, 2), (int)pow(num, 3));
    return 0;
}

