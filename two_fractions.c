#include<stdio.h>

struct fraction{
    int n, d;
}f1, f2;

int gcdcalc(int n3, int d3)
{
    int gcd;
    for(int i=1; i<n3 && i<d3; i++)
	{
		if(n3%i==0 && d3%i==0)
			gcd=i;
	}
}

int main()
{
	int  n3, d3, gcd;
	int lcm;
	printf("\nEnter the numerator and denominator for the first fraction :");
	scanf("%d%d", &f1.n, &f1.d);
	printf("\nEnter the numerator and denominator for the second fraction :");
	scanf("%d%d", &f2.n, &f2.d);
	n3 = (f1.n*f2.d)+(f1.d*f2.n);
	d3 = f1.d*f2.d;
    gcd = gcdcalc(n3, d3);
    n3 = n3/gcd;
	d3 = d3/gcd;
    
	printf("\nThe sum of %d / %d and %d / %d is %d / %d", f1.n,f1.d,f2.n,f2.d,n3,d3);
	return 0;
}
