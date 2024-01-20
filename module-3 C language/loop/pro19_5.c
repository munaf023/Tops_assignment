//pattern using abc.... 
#include<stdio.h>
int main() 
{
    int i,j,rows = 5;
    char a = 64;
    
    for(i = 1; i <= rows; i++) 
	{
        for(j = 1; j <= i; j++)
		{
			a++;
          printf("%c",a);
        }
        printf("\n");
    }

    return 0;
}

