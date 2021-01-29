#include<stdio.h>

float input()
{
	float n;
	printf("\nEnter number: ");
	scanf("%f", &n);
	return n;
}

float sum(float a, float b)
{
	float sum;
	sum = a+b;
	return sum;
}

void output(float n)
{
	printf("\nThe sum is %f",n);
}

int main()
{
	float x,y,z;
	x = input();
	y = input();
	z = sum(x,y);
	output(z);
	return 0;
}
