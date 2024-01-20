// C Program to Check Uppercase or Lowercase or Digit or Special Character


int main()
{
	char ch;
	
	printf("Enter a character to check if it is digit , letter or special:");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("%c is Alphabet",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%c is Digit",ch);
	}
	else
	{
		printf("%c is special character",ch);
	}
		
	return 0;
}
