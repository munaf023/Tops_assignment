//Find the Character Is Vowel or Not

#include<stdio.h>
int main()
{
	int lowcase_vowels,uppercase_vowels;
	char c;
	printf("Enter character to check if it is vowels or consonant: ");
	scanf("%c",&c);
	lowcase_vowels = (c =='a'|| c =='e'|| c =='i'|| c =='o'|| c =='u');
	uppercase_vowels = (c =='A'|| c =='E'|| c =='I'|| c =='O'|| c =='U');
	if(lowcase_vowels || uppercase_vowels)
	{
		printf("%c is vowels",c);
	}
	else
	{
		printf("%c is consonant",c);
	}
	
	return 0;
}
