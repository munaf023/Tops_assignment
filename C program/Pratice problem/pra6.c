//Check weather it is alphabet or not

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter to check weather it is alphabet or not:");
	scanf("%c",&ch);
	
	if((ch>='a') && (ch<='z') || (ch>='A') && (ch<='Z'))
	{
		printf("Character is alphabet:",ch);
	}
	else
	{
		printf("Character is not alphabet:",ch);
	}
	
	return 0;
}
