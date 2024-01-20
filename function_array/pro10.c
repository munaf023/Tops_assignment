//WAP to perform Palindrome number using for loop and function
#include <stdio.h>
#include <string.h>

int isPalindrome(int num)
{
    int temp = num, rev = 0;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return num == rev;
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}

