//1 2 3 6 9 18 27 54..
#include <stdio.h>

int main() {
    int numTerms, i;

    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);

    int currentNum = 1;

    printf("The sequence is: ");
    for (i = 1; i <= numTerms; ++i) {
        printf("%d ", currentNum);

        // Generate the next term based on the pattern
        if (i % 2 == 0) {
            currentNum = currentNum * 3;
        } else {
            currentNum = currentNum * 2 + 1;
        }
    }

    printf("\n");

    return 0;
}
