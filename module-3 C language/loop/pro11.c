//.Accept 5 names from user at run time.
#include <stdio.h>
int main()
{
	char name;
	int i;
	printf("Enter 5 name:");
	for(i=1;i<=5;i++)
	{
		scanf("%c",&name);
	}
	printf("%c",name);
	
	return 0;
}
