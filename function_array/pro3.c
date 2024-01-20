// WAP to find reverse of string using recursion
#include<stdio.h>
#include<string.h>
int rev(int num);
int main()
{
	int num1;
//	printf("Rev : %s",strrev(number)); 	
//	printf("rec : %d",num1);
	rev(num1);
	return 0;

}
int rev(int num) {
	
	int num1=21;
	if(num1 != '\0') {
		return  num1 + rev(rev-1);
		printf("%d",num1);
	}
	else
	{
			return 0;
	}
}
