// local variable: the variable declared within thr local scope are called local variable
// global variable : The variable declared in the global scope are called global variable 
					// global variable are visible in every part of the program.

#include<stdio.h>
int a; //global

int main()
{
	int b = 10; //local
	printf("%d\n",b); //b is local variable.
	//outside of main function b is not accessable 
	sum();
}

void sum()
{
	a=7;
	printf("%d",a);	
}
