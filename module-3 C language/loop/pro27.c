// 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........
#include<stdio.h>
int main()
{
    double i, n,sum=0;
    n=10;
    for(i=1;i<=n;i++)
    {
        if ((int)i%2==1)
            sum+=i/(i+1);
        else
            sum-=i/(i+1);
    }
    printf("Sum: %lf",sum);
    return 0;
}
