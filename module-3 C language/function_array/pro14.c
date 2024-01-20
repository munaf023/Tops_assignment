//Perform 2D matrix array

#include<stdio.h>
int main()
{
	int i,j,row,col;
	int arr[100][100];
	printf("Enter how many row you want:");
	scanf("%d",&row);
	printf("Enter how many columns you want: ");
	scanf("%d",&col);
	
	printf("Enter total %d values ",row*col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
