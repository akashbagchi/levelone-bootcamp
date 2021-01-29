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
			continue();
		}
		x = (num*y)+(den*x);
		y = den*y;
	}
	
	printf("\nThe sum of your entered fractions is %d / %d",x,y);
	return 0;

}
