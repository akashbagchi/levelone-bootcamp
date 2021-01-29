#include<stdio.h>

int main()
{
	int n, num, den, x,y,gcd;
	printf("\nEnter how many fractions you want to add: ");
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		printf("\nEnter numerator and denominator: ");
		scanf("%d %d",&num,&den);
		if(i==0)
		{
			x=num;
			y=den;
			continue;
		}
		x = (num*y)+(den*x);
		y = den*y;
	}
	
	for(int j=1; j<x && j<y; j++)
	{
		if(x%j==0 && y%j==0)
			gcd=j;
	}
	x = x/gcd;
	y = y/gcd;

	
	printf("\nThe sum of your entered fractions is %d / %d",x,y);
	return 0;

}
