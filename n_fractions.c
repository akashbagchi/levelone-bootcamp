#include<stdio.h>

struct frac{
    int num, den;
}f[50];

void addto(int i, int *x, int *y)
{
    	if(i==0)
	{
		*x = f[i].num;
		*y = f[i].den;
	}
	else
	{
	    *x = (f[i].num * (*y))+(f[i].den * (*x));
	    *y = f[i].den * (*y);

	}
}

int gcdcalc(int x, int y)
{
    int gcd;
    for(int j=1; j<x && j<y; j++)
	{
		if(x%j==0 && y%j==0)
			gcd=j;
	}
	
	return gcd;
}

void output(int x, int y)
{
    printf("\nThe sum of your entered fractions is %d / %d",x,y);
}

void input(int i)
{
    printf("\nEnter the numerator and denominator :");
    scanf("%d %d", &f[i].num, &f[i].den);
}

int main()
{
    int n, x, y, gcd;
    printf("\nHow many fractions to be added? :");
    scanf("%d", &n);
    
    for(int i=0;i<n;i++)
    {
        input(i);
        addto(i, &x, &y);
    }
    
    gcd = gcdcalc(x,y);
	x = x/gcd;
	y = y/gcd;
	output(x,y);
	
	return 0;
}
