// WAP to reverse a string and check that the string is palindrome or not
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    if (strcmp(str, strrev(str)) == 0) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}

