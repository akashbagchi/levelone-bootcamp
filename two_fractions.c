#include<stdio.h>

int main()
{
	int n1,d1,n2,d2, n3, d3, gcd;
	int lcm;
	printf("\nEnter the numerator and denominator for the first fraction :");
	scanf("%d%d", &n1, &d1);
	printf("\nEnter the numerator and denominator for the second fraction :");
	scanf("%d%d", &n2, &d2);
	n3 = (n1*d2)+(d1*n2);
	d3 = d1*d2;
	
	for(int i=1; i<n3 && i<d3; i++)
	{
		if(n3%i==0 && d3%i==0)
			gcd=i;
	}
	n3 = n3/gcd;
	d3 = d3/gcd;

	printf("\nThe sum of %d / %d and %d / %d is %d / %d", n1,d1,n2,d2,n3,d3);
	return 0;
}
