//Area of triangle

#include<stdio.h>
int main()
{
	int b;
	printf("enter b of triangle: ");
	scanf("%d",&b);
	
	int h;
	printf("enter h of triangle: ");
	scanf("%d",&h);
	
	float tri=0.5;
	tri=0.5*b*h;
	printf("Area of triangle: %f",tri);
	
	return 0;
}
