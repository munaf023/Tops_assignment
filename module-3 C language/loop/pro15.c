//Calculate sum of 10 numbers using of while loop

#include<stdio.h>
int main()
{
	int count,number,total=0;
	
	while(count<10)
	{
	    printf("Enter number %d: ", count + 1);
        scanf("%d", &number);
        total += number;
        count++;
    }
       printf("The sum of the 10 numbers is: %d\n", total);
	
	return 0;
}
