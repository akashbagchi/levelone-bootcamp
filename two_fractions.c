#include<stdio.h>

struct fraction{
    int n, d;
};

void sum(struct fraction f1, struct fraction f2, struct fraction *f3)
{
    f3->n = (f1->n*f2->d)+(f1->d*f2->n);
    f3->d = f1->d*f2->d;
    
    int n1 = f3->n, n2 = f3->d;
    while (n1 != n2) 
    { 
        if (n1 > n2)         
            n1 -= n2;         
        else        
            n2 -= n1;         
    } 
    int gcd = n1;
    
    f3->n = f3->n/gcd;
    f3->d = f3->d/gcd;
}

void input(struct fraction *f1, struct fraction *f2)
{
    printf("\nEnter the numerator and denominator for the first fraction :");
    scanf("%d%d", &f1->n, &f1->d);
    printf("\nEnter the numerator and denominator for the second fraction :");
    scanf("%d%d", &f2->n, &f2->d);
}

void output(struct fraction f1, struct fraction f2, struct fraction f3)
{
    printf("\nThe sum of %d / %d and %d / %d is %d / %d", f1.n,f1.d,f2.n,f2.d,f3.n,f3.d);
}

int main()
{
    struct fraction f1, f2, f3;
    input(&f1, &f2);
    sum(&f1, &f2, &f3);
    output(f1, f2, f3);
    return 0;
}
