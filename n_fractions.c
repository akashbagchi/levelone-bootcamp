#include<stdio.h>

struct frac{
    int num, den;
};

void addto(int i, int *x, int *y, struct frac *f)
{
    	if(i==0)
	{
	    *x = f->num;
            *y = f->den;
	}
	else
	{
	    *x = (f->num * (*y))+(f->den * (*x));
	    *y = f->den * (*y);

	}
}

int gcdcalc(int x, int y)
{
    while(x!=y)
    {
        if(x>y)
            x -= y;
        else
            y -= x;
    }
    return x;
}

void output(int x, int y)
{
    printf("\nThe sum of your entered fractions is %d / %d",x,y);
}

void input(int i, struct frac *f)
{
    printf("\nEnter the numerator and denominator :");
    scanf("%d %d", &f->num, &f->den);
}

void calc(int *x, int *y, int gcd)
{
    *x = *x/gcd;
    *y = *y/gcd;
}

int main()
{
    struct frac f[50];
    int n, x, y, gcd;
    printf("\nHow many fractions to be added? :");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        input(i, &f[i]);
        addto(i, &x, &y, &f[i]);
    }
    gcd = gcdcalc(x,y);
    calc(&x, &y, gcd);
    output(x,y);
	
    return 0;
}
