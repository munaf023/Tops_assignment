//write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include<stdio.h>
int main()
{
	int num,rem,i,large=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem = num % 10;
		if(rem>large)
		{
			large = rem;
		}
		num = num / 10;
	}
	printf("%d is largest digit",large);
	return 0;
}



