//Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary

#include<stdio.h>
int main()
{
	int sal,premium,loan,remaining_sal;
	printf("Enter your salary:");
	scanf("%d",&sal);
	
	premium = sal * 0.1;
	remaining_sal = sal - premium; 
	loan = remaining_sal * 0.1;
	remaining_sal -= loan;
	
	printf("your remaining salary: %d",remaining_sal);
	
	return 0;
}
