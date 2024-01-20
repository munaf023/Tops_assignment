#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,count=0;
	char str[100];
	char maxRepeatedChar,maxcount;
	printf("Enter a string: ");
	scanf("%s",&str);
	
	for(i=0;i<strlen(str);i++)
	{	count=0;
		for(j=0;j<strlen(str);j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
		}
		if(maxcount<count)
		{
			maxcount=count;
			maxRepeatedChar=str[i];
		}
	}
	printf("The char %c has been reapeated maximum of %d times",maxRepeatedChar,maxcount);
	
	
	return 0;
}
