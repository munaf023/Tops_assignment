//pattern_1
//1
//10
//101
//1010
//101010
#include <stdio.h>

int main() 
{
    int i,j,rows = 5;
    
    for (i = 1; i <= rows; i++) 
	{
        for (j = 1; j <= i; j++)
		{
            if (j % 2 == 1) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}

