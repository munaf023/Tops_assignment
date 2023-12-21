//Take 5 subject marks from user and find total ,avg and percentage

#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5;
	printf("Enter marks of maths:\n");
	scanf("%d",&sub1);
	
	printf("Enter marks of Science:\n");
	scanf("%d",&sub2);
	
	printf("Enter marks of English:\n");
	scanf("%d",&sub3);
	
	printf("Enter marks of Gujarati:\n");
	scanf("%d",&sub4);
	
	printf("Enter marks of Social science:\n");
	scanf("%d",&sub5);
	
	int total;
	total=sub1+sub2+sub3+sub4+sub5;
	printf("Total of all subject is :%d\n",total);
	
	float avg;
	avg = total/5;
	printf("Average is:%f\n",avg);
	
	int percentage;
	percentage = total/500*100;
	printf("Percentage is:%d\n",percentage);
	
	return 0;
}
