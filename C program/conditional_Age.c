//Coditional statement

#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	//licence 18> 
	//simple if
	if(age>18)
	{
		printf("you can apply for driving license");
	}
	else if(age>16 && age<=18)
	{
		printf("you can apply for learning licence");
	}
	else
	{
		printf("you can't apply'");
	}
	return 0;
}
