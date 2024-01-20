// Write a program in C to count the total number of vowels or consonants in a
//string.
#include<stdio.h>
#include<string.h>
int main()
{
	int vowel = 0,consonant = 0,i,len;
	char str[100];
	len = strlen(str);
	printf("Enter a string: ");
	scanf("%s",&str);
	
	for(i=0;i<strlen;i++)
	{
		if((str[i]>='a'&& str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
			 if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
               {
               		vowel++;
			   }
			   else
			   {
			   		consonant++;
			   }
		}
	}
	printf("Total vowels are : %d",vowel);
	printf("Total consonant are : %d",consonant);
	
	return 0;
}
