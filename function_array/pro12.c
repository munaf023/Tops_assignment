//WAP to accept 5 students name and store it in array
#include <stdio.h>

int main() {
	int i;
    char studentNames[5][50];

    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", studentNames[i]);
    }
    
    printf("\nEntered student names:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, studentNames[i]);
    }

    return 0;
}

