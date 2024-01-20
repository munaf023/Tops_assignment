//WAP of Addition, Subtraction, Multiplication and Division using Switch
//case.(Must Be Menu Driven)
//calculator
#include<stdio.h>
void add();
void sub();
void multi();
void div();
void mod();
int main()
{
	char c;
	printf("Enter a +,-,*,/,% to perform calculation: ");
	scanf("%c",&c);
	switch(c){
	
		case'+':
		 	add();
		 break;
		case'-':
		 	sub();
		 break;
		case'*':
		 	multi();
	       break;
		case'/':
		 	div();
			break;
		case'%':
		 	mod();
			 break;
		default:
			printf("Invalid");
			break;	 
	}
	return 0;
}
void add()
{
	int a,b;
	printf("Enter 2 values: ");
	scanf("%d %d",&a,&b);
	
	printf("Addition is :%d",a+b);
}
void sub()
{
	int a,b;
	printf("Enter 2 values: ");
	scanf("%d %d",&a,&b);
	
	printf("Subtraction is :%d",a-b);
}
void multi()
{
	int a,b;
	printf("Enter 2 values: ");
	scanf("%d %d",&a,&b);
	
	printf("Multiplication is :%d",a*b);
}
void div()
{
	int a,b;
	printf("Enter 2 values: ");
	scanf("%d %d",&a,&b);
	
	printf("Division is :%d",a/b);
}
void mod()
{
	int a,b;
	printf("Enter 2 values: ");
	scanf("%d %d",&a,&b);
	
	printf("modular is :%d",a%b);
}



