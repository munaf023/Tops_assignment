//Write a C program to calculate profit and loss on a transaction

#include<stdio.h>
int main()
{
	int price = 1000,selling_price;
	printf("Enter selling price:");
	scanf("%d",&selling_price);
	
	if(price < selling_price)
	{
		printf("Profit");
	}
	else if(price > selling_price)
	{
		printf("Loss");
	}
	else 
	{
		printf("No profit , No loss");
	}
	
	
	return 0;
}
