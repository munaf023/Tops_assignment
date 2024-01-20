//If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
//minimum bill should be of Rs. 256/-

#include<stdio.h>
int main()
{
	int bill,surcharge;
	printf("Enter bill amount:");
	scanf("%d",&bill);
	
	surcharge = (bill*18)/100;
	
	if(bill>800)
	{
		printf("Your bill with 18% charge:%d",bill,surcharge);
	}
	else
	{
		printf("Bill without charge");
	}
	
	return 0;
}
