// WAP program to print below output using for loop
//01 02 03 04 05 06 07 08 09 10
//11 12 13 14 15 16 17 18 19 20
//..............
//..............
//41 42 43 44 45 46 47 48 49 50

#include <stdio.h>
int main() 
{
    int i,j,rows = 5;
    int cols = 10;
    int counter = 1;

    for(i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++)
		{
            if (counter <= 50) 
			{
                printf("%d ",counter++);
            }
			else
			{
                printf("unknown error"); 
            }
        }
        printf("\n");
    }
}
