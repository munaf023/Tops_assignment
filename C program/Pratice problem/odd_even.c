//conditional statement 
// check if a number is odd or even

#include<stdio.h>
int main()
{
	int num;
	printf("Enter your number :");
	scanf("%d",&num);
	
	if(num%2 == 0)
	{
		printf("even\n");
	}
	else{
		printf("odd\n");
	}
	return 0;
}
