//calculate the Factorial of a Given Number using while loop
#include<stdio.h>
 
int main()
{
  int num, i = 1, fact = 1;
 
  printf("Enter a number to calculate its factorial: ");
  scanf("%d", &num);
 
  while(i <= num)
  {
      fact = fact * i;
      i++;
  }
 
  printf("factorial of %d = %d\n", num, fact);
 
  return 0;
}

