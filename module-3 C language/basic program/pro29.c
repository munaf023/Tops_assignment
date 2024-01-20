//Convert minutes into seconds and hours
#include<stdio.h>
int main()
{
	int min,hr,sec;
	printf("Enter min:");
	scanf("%d",&min);
	
	hr = min/60;
	sec = min*60;
	
	printf("Approximately %d hour and %d seconds\n", hr, sec);	
	
	return 0;
}
