// WAP to take two Array input from user and sort them in ascending or
//descending order as per user’s choice

#include<stdio.h>
int main()
{
	int size,i,j,temp,arr[100];
	
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	printf("Enter element of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("element of array are:");
	
	for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
	return 0;
}
