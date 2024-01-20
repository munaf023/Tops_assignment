// Write a program in C to separate individual characters from a string.
#include <stdio.h>
int main()
{
	int i;
	char str[20];
	printf("Enter the string: ");
	scanf("%s",&str);

	printf("Printing the characters:: \n");
	for (i = 0; str[i] != '\0'; i++)
	 {
		if (str[i] != ' ') 
		{ 
			printf("%c\n", str[i]);
		}
		else
		{
			printf("Entered wrong or null value");
		}
	}
	return 0;
}

