//Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5,fact,i;
	printf("Enter 5 number: ");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	
	while(i<=0)
	{
		fact = fact * i;
		i++;
	}
	printf("factioral is:");
	printf("%d\n%d\n%d\n%d\n%d",n1,n2,n3,n4,n5);
	
	return;
}
