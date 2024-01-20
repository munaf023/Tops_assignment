// Accept 3 numbers from user using while loop and check each numbers
// palindrome

#include <stdio.h>
int main() 
{
   int num, temp, rem, rev = 0;
   printf("enter a number:");
   scanf("%d", &num);
   temp = num;
   
   while ( temp > 0)
   {
      rem = temp %10;
      rev = rev *10+ rem;
      temp = temp /10;
   }
   printf("reversed number is = %d\n", rev);
   if ( num == rev ){
   	printf("%d is Palindrome Number.", num);
   } 
   else{
   printf("%d is not the Palindrome Number.", num);
   }
   return 0;
}
