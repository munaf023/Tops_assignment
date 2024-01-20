//Write a program in C to compare two strings without using string library
//functions.
#include<stdio.h>
int main()
{
	int i;
	char str1[50],str2[50];
	printf("Enter a string one: \n");
	scanf("%s",&str1[50]);
	
	printf("Enter a string two: \n");
	scanf("%s",&str2[50]);
	
	for(i=0;str1[i]==str2[i]&&str1[i]=='\0';i++)
	{
		if(str1[i] < str2[i])
		{
			printf("st1 is less than str2");
		}
		else if(str1[i]>str2[i])
		{
			printf("str2 is less than str1");
		}
		else
		{
			printf("Both are equal");
		}
	}
	return 0;
}

