//Loop is used to done repeated work
//loop 2 types
//1) Entry control loop  for() while()
//2)exit control loop do while()
#include<stdio.h>
int main()
{
	//for loop
    	int i;
    	for(i=0; i<3 i++)
     	{
     		printf("hello\n");
    	}
	
	//while loop 
	int i=0;
	while(i<3)
	{
		printf("Hello");
		i++;
	}
	
	//do while()
	int i=5;
	do{
		printf("hello\n");
		i++
	}while(i<3);
	
	
	return 0;
}

//debug:
//i=0 0<3 hello i=1
//i=1 1<3 hello i=2
//i=2 2<3 hello i=3
//i=3 3<3 false


