//.Accept the input month number and print number of days in that month.

#include<stdio.h>
int main()
{
	int num;
	printf("Enter month number and print number of days in that month");
	scanf("%d",&num);
	
		switch(num)
	{
		case 1:
			printf("31 days in january");
			break;
		case 2:
			printf("28 days in Feb");
			break;
		case 3:
			printf("31 days in march");
			break;
		case 4:
			printf("30 days in april");
			break;
		case 5:
			printf("31 days in may");
			break;
		case 6:
			printf("30 days in june");
			break;
		case 7:
			printf("31 days in july");
			break;
		case 8:
			printf("31 days in august");
			break;
		case 9:
			printf("30 days in Sept.");
			break;
		case 10:
			printf("31 days in Oct");
			break;
		case 11:
			printf("30 days in Nov");
			break;
		case 12:
			printf("31 days in Dec");
			break;		
		default:
			printf("invalid");
	}
	
	
	return 0;
}
