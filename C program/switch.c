#include<stdio.h>

int main()
{
	int num1;
	printf("Enter number between(0-7):");
	scanf("%d",&num1);
	
	switch(num1)
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
		default:
			printf("Invaild");
	}
	
	
	return 0;
}
