
//Variable are container for storing data value , like number and container
#include<stdio.h> 
  				
int main()					
{
	int num = 5;				//Integer(number without point)
	float floatnum = 5.99;		//float(number without point)
	char letter = 'd';		    //character
	double num2 = 555555;
	
	//print variable
	printf("%d\n",num);			//format specifier %d or %i for int
	printf("%f\n",floatnum);	//format specifier %f for float
	printf("%c\n",letter);		//format specifier %c for character
	printf("%lf\n",num2);		//format specifier %lf for double
	printf("My faviorite number is :%d\n",num);  //to combine both text and a variable, seprate them with a comma inside the printf() function
	printf("My number is %d and my letter is %c",num,letter);
	
	return 0; 						
}
