#include<stdio.h>
#include<math.h>

float input(char a[])
{
	float n;
	printf("\nEnter value for %s :", a);
	scanf("%f", &n);
	return n;
}

float dist(float x1, float x2, float y1, float y2)
{
	float d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	return d;
}

void output(float d, float x1, float x2, float y1, float y2)
{
	printf("\nThe distance between the points (%f, %f) and (%f, %f) is %f .",x1,x2,y1,y2,d);
}

int main()
{
	float x1,x2,y1,y2,d;
	x1 = input("x1");
	x2 = input("x2");
	y1 = input("y1");
	y2 = input("y2");
	
	d = dist(x1, x2, y1, y2);
	output(d,x1,x2,y1,y2);
	return 0;
}
