//Dynamic Calculator
#include<stdio.h>

int main()
{
	int val_1,val_2,ans;
	char choice;
	printf("+ for addition,- for subtraction,* for multiplication,/ for division");
	printf("\nEnter your choice:");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case'+':
			printf("Enter first value and second value");
			scanf("%d %d",&val_1,&val_2,&ans);
			ans=val_1+val_2;
			printf("Addition of %d and %d is %d",val_1,val_2,ans);
			break;
		case'-':
			printf("Enter first value and second value");
			scanf("%d %d",&val_1,&val_2,&ans);
			ans=val_1-val_2;
			printf("Subtraction of %d and %d is %d",val_1,val_2,ans);
			break;
		case '*':
			printf("Enter first value and second value");
			scanf("%d %d",&val_1,&val_2,&ans);
			ans=val_1*val_2;
			printf("multiplication of %d and %d is %d",val_1,val_2,ans);
			break;
		case'/':
		    printf("Enter first value and second value");
			scanf("%d %d",&val_1,&val_2,&ans);
			if(val_2==0)
			{
				printf("Cannot divide by zero");
			}
			else
			{
			    ans=val_1/val_2;
			    printf("division of %d and %d is %d",val_1,val_2,ans);
		    }
			break;	
	}
	return 0;
}
