//Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter string: ");
	scanf("%s",&str);

	printf("Reverse : %s",strrev(str)); 
	
	return 0;
}
