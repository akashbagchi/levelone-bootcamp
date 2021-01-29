#include<stdio.h>
int main()
{
	float h, d, b, vol;
	printf("Please enter the dimensions of the tromboloid: \n");
	printf("h = ");
	scanf("%f", &h);
	printf("\nd = ");
	scanf("%f", &d);
	printf("\nb = ");
	scanf("%f", &b);
	vol = (1/3)*((h*d)+d)/b;
	printf("\nThe volume of a tromboloid with h = %f, d = %f and b = %f is %f",h,d,b,vol);
	return 0;
}
