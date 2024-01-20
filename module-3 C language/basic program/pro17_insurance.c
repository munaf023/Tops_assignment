//Calculate persons insurance premium based on salary.

#include<stdio.h>
int main()
{
	int sal;
	float rate , premium;
	
	printf("Enter salary to know insurance based on salary:");
	scanf("%d",&sal);
	
	premium = sal - rate;
	printf("%f",premium);
	
	return 0;
}

