//Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>

int main()
{
    int count = 0, num, evenCount = 0, oddCount = 0;

    printf("Enter 5 numbers:\n");
	scanf("%d", &num);
	
    while (count < 5) 
	{
        if (num % 2 == 0)
		{
            evenCount++;    
        } 
		else
		{
            oddCount++;
        }

        count++;
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}

