//WAP to input the week number and print week day

#include<stdio.h>
int main()
{
	int week;
	printf("Enter week number to print day(1 to 7):");
	scanf("%d",&week);
	
	switch(week)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuseday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default :
			printf("Invalid number is enter");		
	}
	
	
	return 0;
}
