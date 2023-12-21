//conditional statement

#include<stdio.h>
int main()
{
	int age;
	printf("enter your age :");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("you are adult\n");
		printf("you can drive\n");
		printf("you can vote\n");
	}
	else
	{
		printf("you are not an adult\n");
		printf("you cannot drive\n");
		printf("you cannot vote\n");
	}
	return 0;
}
