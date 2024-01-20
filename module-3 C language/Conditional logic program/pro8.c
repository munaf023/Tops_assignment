// WAP to accept the height of a person in centimeters and categorize the
// person according to their height

#include<stdio.h>
int main()
{
	int height;
	printf("Enter your height(in centimeter):");
	scanf("%d",&height);
	
	if(height<140)
	{
		printf("Short-heighted");
	}
	else if((height >= 150) && (height <= 170))
	{
		printf("Average height");
	}
	else if((height>=180) && (height<190))
	{
		printf("Taller");
	}
	else
	{
		printf("Abnormal");
	}
	
	
	
	return 0;
}
