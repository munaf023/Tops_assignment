//area rectangular prism formula = 2wl+2lh+2hw

#include<stdio.h>
int main()
{
	int l,w,h,area;
	printf("Enter l:");
	scanf("%d",&l);
	printf("Enter w:");
	scanf("%d",&w);
	printf("Enter h:");
	scanf("%d",&h);
	
	area = 2 * ((l * h) + (w * h) + (l * w));
	printf("%d",area);
	
	return 0;
}
