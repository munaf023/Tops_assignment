// conditional statement
#include<stdio.h>

int main()
{
	int pr;
	printf("Enter your percentage:");
	scanf("%d",&pr);
	
	if(pr<90)
	{
		printf("Grade:A++");
	}
	else if(pr<60 && pr<=80)
	{
		printf("Grade:B");
	}
	else if(pr<=35)
	{
		printf("pass");
	}
	else if(pr>=0 && pr<35)
	{
		printf("fail");
	}
	else
	{
		printf("Enter valid pr");
	}
	
	return 0;
}


