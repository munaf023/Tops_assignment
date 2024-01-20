// Write a program in C to count the total number of words in a string.
#include<stdio.h>
int main()
{
	int i ,count;
	char str[50];
	printf("Enter a string: ");
	scanf("%s", &str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!='\0')
		{
			count++;
		}
		i++;
	}
		printf("The number of words are : %d",count);
		
	return 0;
}

