#include<stdio.h>

int main()
{
	printf("Hello world");
	printf("hello world\nI am learning C");			// |n new line
	printf("hello world\tI am learning C");			// \t horizontal space
	printf("hello\\world");		//output: hello\world
	printf("hello\"world\"");		//output: hello "world"
	
	return 0;
	
}

// \n new line used to change cursor position to the beginning of the next line on the screen.
// \t Creates a horizontal tab
// \\ Inserts a backslash character (\) 
// \"Inserts a double quote character
