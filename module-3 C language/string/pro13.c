//.Write a program in C to remove characters from a string except alphabets.
#include<stdio.h>
int main() {
	int i,j;
   char line[150];
   
   printf("Enter a string: ");
   scanf("%s",&line);


   for (i = 0, j; line[i] != '\0'; ++i)
	{

      while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
         for (j = i; line[j] != '\0'; ++j) {

            line[j] = line[j + 1];
         }
         line[j] = '\0';
      }
   }
   printf("Output String: ",line);
   puts(line);
   return 0;
}
