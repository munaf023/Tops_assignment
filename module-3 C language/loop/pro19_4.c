//pattern_4
//1
//23
//456
//78910
//11121314
//1516171819

#include <stdio.h>
int main() 
{ 
    int i,j,rows = 5; 
    int n = 1; 
  
    for(i=0; i<rows; i++)
    {
    	for(j=0; j<=n; j++)
    	{
    		 printf("%d ",n++);
		}
	 		 printf("\n"); 
	}
	return 0;
}
