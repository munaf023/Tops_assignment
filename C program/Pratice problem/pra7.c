//check weather it is vowels or consonant

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character to check weather if it is vowels or consonant:n");
	scanf("%c",&ch);
	
	if(ch=='A'|| ch=='E'|| ch=='I'||ch=='O'||ch=='U'||
	   ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u')
	   {
	   	printf("%c is vowel",ch);
	   }
	else if((ch>='a')&& (ch<='z')|| (ch>='A')&& (ch<='Z'))   
	{
		
		printf("%c is consonant",ch);
	}
	else
	{
		printf("%c is not an alphabet",ch);
	}
	
	
	return 0;
}
