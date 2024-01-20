//Write a program in C to find the largest and smallest words in a string./
#include <stdio.h>
#include <string.h>

int main() {
   char str[100], word[20], mx[20], mn[20], c;
   int i = 0, j = 0, flg = 0;

   printf("\n\nFind the largest and smallest word in a string :\n");
   printf("\n");
   printf("Input the string : ");

   while ((c = getchar()) != '\n' && i < sizeof(str) - 1) 
   {
       if (isalnum(c) || isspace(c))
		{
           str[i++] = c;
       }
   }
   str[i] = '\0';

   strcpy(mx, "");
   strcpy(mn, "");

   for (i = 0; i < strlen(str); i++) {
       j = 0;
       while (i < strlen(str) && !isspace(str[i])) {
           word[j++] = str[i++];
       }
       word[j] = '\0';

       if (strlen(word) > strlen(mx)) {
           strcpy(mx, word);
       }
       if (flg == 0 || strlen(word) < strlen(mn)) {
           strcpy(mn, word);
           flg = 1;
       }
   }

   printf("The largest word is '%s' and the smallest word is '%s' in the string : '%s'\n", mx, mn, str);

   return 0;
}
