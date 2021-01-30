#include<stdio.h>

struct fraction{
    int n, d;
};

int gcdcalc(int n1, int n2) 
{ 
    while (n1 != n2) 
    { 
        if (n1 > n2)         
            n1 -= n2;         
        else        
            n2 -= n1;         
    } 
    return n1; 
}

void calc1(int *n, int *d, struct fraction *f1, struct fraction *f2)
{
    *n = (f1->n*f2->d)+(f1->d*f2->n);
    *d = f1->d*f2->d;
}

void calc2(int *n, int *d, int gcd)
{
    *n = *n/gcd;
    *d = *d/gcd;
}

void input(struct fraction *f1, struct fraction *f2)
{
    printf("\nEnter the numerator and denominator for the first fraction :");
    scanf("%d%d", &f1->n, &f1->d);
    printf("\nEnter the numerator and denominator for the second fraction :");
    scanf("%d%d", &f2->n, &f2->d);
}

void output(struct fraction f1, struct fraction f2, int n, int d)
{
    printf("\nThe sum of %d / %d and %d / %d is %d / %d", f1.n,f1.d,f2.n,f2.d,n,d);
}

int main()
{
    struct fraction f1, f2;
    int  n, d, gcd;
    input(&f1, &f2);
    calc1(&n, &d, &f1, &f2);
    gcd = gcdcalc(n, d);
    calc2(&n, &d, gcd);
    output(f1, f2, n, d);
    return 0;
}
