#include<stdio.h>

void main()
{
	int n,s = 0;
	
	int *p1;
	int *p2;
	
	p1 = &n;
	p2 = &s;
	
	printf("Enter Number  = ");
	scanf("%d",&n);
	
	p1 = &n;
	p2 = &s;
	s = (*p1)*(*p1);
	
	printf("\nSquare is = %d",*p2);
}
