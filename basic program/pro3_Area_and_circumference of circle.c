//Find Area And Circumference of Circle

#include<stdio.h>
int main()
{
	float area,radius,circumference,pi;
	pi = 3.14;
	printf("Enter radius of circle:");
	scanf("%f",&radius);
	
		area = pi * radius * radius;
		circumference = 2 * pi * radius;
	printf("Area of circle %f\n",area);	
	printf("Circumference of circle %f\n",circumference);
	
	return 0;
}
