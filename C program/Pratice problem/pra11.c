//C program to check whether triangle is valid or not if angles are given

#include<stdio.h>
int main()
{
	
	int angle_1,angle_2,angle_3,sum;
	
	printf("Enter three angle of triangle:");
	scanf("%d %d %d",&angle_1 ,&angle_2 ,&angle_3);
	
		sum = angle_1 + angle_2 + angle_3;
	if( sum==180 && angle_1 > 0 && angle_2 > 0 && angle_3 > 0)
	{
		
		printf("Triangle is valid");
	}
	else
	{
		printf("Triangle is invalid");
	 } 
	
	return 0;
}
