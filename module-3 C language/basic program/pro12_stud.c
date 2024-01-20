//Accept number of students from user. I need to give 5 apples to each
//student. How many apples are required?

#include<stdio.h>
int main()
{
	int num,result;
	printf("Enter number of student:");
	scanf("%d",&num);
	
	result = num*5;
	printf("%d",result);
	
	return 0;
}
