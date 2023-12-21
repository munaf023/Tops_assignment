#include<stdio.h>
int main()
{
	int num = 15;  //num is 15
	int otherNum = 25; //
	
	num = 10;   //now num is 10
	num = otherNum;		//number is now 25, instead of 10
	
	printf("%d",num);
	return 0; 
	
}

