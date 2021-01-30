#include<stdio.h>

struct frac{
    int num, den;
};

void addto(int i, struct frac *fsum, struct frac *f)
{
    if(i==0)
	{
	    fsum->num = f->num;
        fsum->den = f->den;
	}
	else
	{
	    fsum->num = (f->num * fsum->den)+(f->den * fsum->num);
	    fsum->den = f->den * fsum->den;

	}
}

int gcdcalc(struct frac fsum)
{
    while(fsum.num!=fsum.den)
    {
        if(fsum.num>fsum.den)
            fsum.num -= fsum.den;
        else
            fsum.den -= fsum.num;
    }
    return fsum.num;
}

void output(struct frac fsum)
{
    printf("\nThe sum of your entered fractions is %d / %d",fsum.num,fsum.den);
}

void input(int i, struct frac *f)
{
    printf("\nEnter the numerator and denominator :");
    scanf("%d %d", &f->num, &f->den);
}

void calc(struct frac *fsum, int gcd)
{
    fsum->num = fsum->num/gcd;
    fsum->den = fsum->den/gcd;
}

int main()
{
    struct frac f[50], fsum;
    int n, gcd;
    printf("\nHow many fractions to be added? :");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        input(i, &f[i]);
        addto(i, &fsum, &f[i]);
    }
    gcd = gcdcalc(fsum);
    calc(&fsum, gcd);
    output(fsum);
	
    return 0;
}
