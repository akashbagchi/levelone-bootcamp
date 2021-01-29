#include<stdio.h>

int main()
{
	int n1,d1,n2,d2, n3, d3;
	int lcm;
	printf("\nEnter the numerator and denominator for the first fraction :");
	scanf("%d%d", &n1, &d1);
	printf("\nEnter the numerator and denominator for the second fraction :");
	scanf("%d%d", &n2, &d2);
	n3 = (n1*d2)+(d1*n2);
	d3 = d1*d2;


	printf("\nThe sum of %d / %d and %d / %d is %d / %d", n1,d1,n2,d2,n3,d3);
	return 0;
}
