#include<stdio.h>

struct frac{
    int num, den;
};

void addto(int i, struct frac *fsum, struct frac f)
{
    if(i==0)
	{
	    fsum->num = f.num;
        fsum->den = f.den;
	}
	else
	{
	    fsum->num = (f.num * fsum->den)+(f.den * fsum->num);
	    fsum->den = f.den * fsum->den;

	}
}

void calc(struct frac *fsum, int gcd)
{
    fsum->num = fsum->num/gcd;
    fsum->den = fsum->den/gcd;
}

void gcdcalc(struct frac *fsum)
{
    int n1 = fsum->num, n2 = fsum->den, gcd;
    while(n1!=n2)
    {
        if(n1>n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    gcd = n1;
    calc(fsum, gcd);
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

struct frac maininput(int *n)
{
    struct frac f[50], fsum;
    printf("\nHow many fractions to be added? :");
    scanf("%d", n);
    for(int i=0;i<(*n);i++)
    {
        input(i, &f[i]);
        addto(i, &fsum, f[i]);
    }
    
    return fsum;
}

int main()
{
    int n;
    struct frac fsum = maininput(&n);
    gcdcalc(&fsum);
    output(fsum);
    return 0;
}
