#include<stdio.h>

struct fraction{
    int n, d;
};

void calc(int *n, int *d, struct fraction *f1, struct fraction *f2)
{
    *n = (f1->n*f2->d)+(f1->d*f2->n);
    *d = f1->d*f2->d;
    
    int n1 = *n, n2 = *d;
    while (n1 != n2) 
    { 
        if (n1 > n2)         
            n1 -= n2;         
        else        
            n2 -= n1;         
    } 
    int gcd = n1;
    
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
    int  n, d;
    input(&f1, &f2);
    calc(&n, &d, &f1, &f2);
    output(f1, f2, n, d);
    return 0;
}
