// pattern_2
//     *
// 	  ***
//   *****
//  *******
// **********     	

#include<stdio.h>
int main()
{
	int i ,k, n = 8;
	int j;
	int ;
	
	for( i = 1;i<=n; i++)
	{
		for(j = n-1; k>0; k--)
		{
			printf(" ");
		}
		for( j = 1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
