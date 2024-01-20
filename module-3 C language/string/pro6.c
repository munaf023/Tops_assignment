// Write a program in C to count the total number of alphabets, digits and special
// characters in a string
#include<stdio.h>
int main()
{
	char str[100];
	int alpha,num,special,i;
	
	printf("Enter a string: ");
	scanf("%s",&str[i]);
	
	for(i=0;str[i]!=0;i++)
	{
		if((str[i]>='a' && str[i]<='z')||(str[i]<='A' && str[i]>='Z'))
		{
			alpha++;
		}
		else if(str[i]>='0'&& str[i]<='9')
		{
			num++;
		}
		else
		{
			special++;
		}
		i++;
	printf("alphabet are : %d\n",alpha);
	printf("number are : %d\n",num);
	printf("Special character are :%d\n",special);	
		
	}
	
	return 0;
}
