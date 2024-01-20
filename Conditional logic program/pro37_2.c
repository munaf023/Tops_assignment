//Vowel or Consonant using switch case

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character to check weather it is vowel or consonant:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case'a':
			printf("vowels");
			break;
		case'e':
			printf("vowels");
			break;
		case'i':
			printf("vowels");
			break;
		case'o':
			printf("vowels");
			break;
		case'u':
			printf("vowels");
			break;
		case's':
			printf("vowels");
			break;
		case'A':
			printf("vowels");
			break;
		case'E':
			printf("vowels");
			break;
		case'I':
			printf("vowels");
			break;
		case'O':
			printf("vowels");
			break;
		case'U':
			printf("vowels");
			break;
		case'S':
			printf("vowels");
			break;
		default:
			printf("Consonant");
	}
	
	return 0;
}
