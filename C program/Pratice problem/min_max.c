//take 3 number from user and check which is maximum

#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("Enter 3 number to check which is maximum:");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	if(num1>num2)
	{
		if(num1>num2)
		{
			max=num1;	
		}
		else
		{
			max = num3;
		}
   }
   else
   {
	   	if(num2>num3)
	   	{
	   		max=num2;
		}
		else
		{
			max=num3;
		}
   } 
   printf("Maximum among all three number = %d",max);
	
	return 0;
}
