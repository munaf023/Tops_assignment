// WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
// 82746
int main()
{
	int rev=0,rem,no;
	int temp=no;
	printf("Enter number:");
	scanf("%d",&no);
	
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	printf("%d is reverse of %d",rev,temp);
	
	return 0;
}
