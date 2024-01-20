//. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
	char name1[100],name2[100];
	printf("Enter name 1:");
	scanf("%s",&name1);
	
	strcpy(name2,name1);
	printf("%s is name2",name2);
	return 0;
}

