// Write a program you have to make a summation of first and last Digit. (E.g.,
// 1234 Ans: -5)

#include <stdio.h>
int main() 
{
    int no, f_d, l_d, sum;

    printf("Enter a number: ");
    scanf("%d", &no);
	   
   	 f_d = no;
    while (f_d >= 10) 
	{
        f_d /= 10;
	}
   	 l_d = no % 10;

    sum = f_d + l_d;

    printf("Sum of the first and last digits is: %d\n", sum);

    return 0;
}

