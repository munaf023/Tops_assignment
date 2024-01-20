//Accept month number and display month name

#include<stdio.h>
int main()
{
	int month;
	printf("Enter month number to display name:");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1:
			printf("January");
			break;
		case 2:
			printf("Feburary");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("july");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("Octocber");
			break;
		case 11:
			printf("November");
			break;
		case 12:
			printf("December");
			break;
		default:
			printf("Invalid number");
	}
	
	
	return 0;
}
