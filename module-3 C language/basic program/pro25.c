//Accept 5 expense from user and find average of expense

#include<stdio.h>
int main()
{
	int exp_1,exp_2,exp_3,exp_4,exp_5,avg,total;
	printf("Enter expense one:");
	scanf("%d",&exp_1);
	
	printf("Enter expense two:");
	scanf("%d",&exp_2);
	
	printf("Enter expense three:");
	scanf("%d",&exp_3);
	
	printf("Enter expense four:");
	scanf("%d",&exp_4);
	
	printf("Enter expense five:");
	scanf("%d",&exp_5);
	
	total = exp_1+exp_2+exp_3+exp_4+exp_5;
	printf("Total expenses:%d\n",total);
	avg =  total / 5;
	printf("Average is:%d",avg);
	return 0;
}

