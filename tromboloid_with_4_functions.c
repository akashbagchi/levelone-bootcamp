#include<stdio.h>
float input(char a)
{
	float n;
	printf("\nEnter the value of %c :",a);
	scanf("%f", &n);
	return n;
}

float vol(float h, float b, float d)
{
	float volume = ((h*d)+d)/(3*b);
	return volume;
}

void output(float v)
{
	printf("\nThe volume of the given tromboid is %f", v);
}

int main()
{
	float h,b,d,v;
	h = input('h');
	b = input('b');
	d = input('d');
	v = vol(h, b, d);
	output(v);
	return 0;
}
