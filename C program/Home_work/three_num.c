//Take three value from user and find maximum from three

int main()
{
	int num1,num2,num3;
	printf("Enter a number:");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	if((num1>num2)&&(num1>num3))
	{
		printf("num1 is maximum");
	} 
	else if((num2>num1) &&(num2>num3))
	{
		printf("num2 is maximum");
	}
	else if((num3>num1)&&(num3>num2))
	{
		printf("num3 is maximum");
	}
	else
	{
		printf("Enter a number only");
	}
	
	return 0;
}
