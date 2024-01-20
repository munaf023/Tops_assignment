//.Write a program in C to extract a substring from a given string

#include<stdio.h>
#include<string.h>

int main()
{
	int pos, len;

	char string[14] = "geeksforgeeks";
	char substring[14];

	pos = 6;
	len = 5;
	printf("String: %s ", string);
	printf("\nsubstring is: ");

	strncpy(substring,string+(pos-1),len);
	printf(substring);

	char string2[5] = "abcde";
	char substring2[5];
	
	pos = 1;
	len = 3;
	printf("\nString: %s ", string2);
	printf("\nsubstring is: ");

	strncpy(substring2,string2+(pos-1),len);
	printf(substring2);
	return 0;
}

