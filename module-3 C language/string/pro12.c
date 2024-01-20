//Write a program in C to find the number of times a given word 'is' appears in
//the given string.
#include<stdio.h>
#include<string.h>

int main() {
    int ctr = 0, j, freq = 0; 
    int i, s; 
    char str[100]; 

    printf("\n\nFind the number of times the word 'is' in any combination appears :\n");

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    ctr = strlen(str);

    for (j = 0; j <= ctr - 2; j++) {
      
        i = (str[j] == 'i' || str[j] == 'I');
        s = (str[j + 1] == 's' || str[j + 1] == 'S');
      
        if ((i && s) == 1)
            freq++;
    }

    printf("The frequency of the word \'is\' is : %d\n\n", freq);
	
	return 0;
}

