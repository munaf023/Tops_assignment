//Area of circle

#include<stdio.h>
int main()
{
	float pi = 3.14;
	float radius;
	printf("Enter radius of circle :");
	scanf("%f",&radius);
	
	float circle;
	circle = pi*radius*radius;
	printf("Area of circle: %f",circle);
	return 0;
}
