#include<stdio.h>
#include<math.h>

struct point{
	float x;
	float y;
}p1, p2;

int main()
{
	printf("\nEnter x,y co-ordinates for P1: ");
	scanf("%f%f", &p1.x, &p1.y);
	printf("\nEnter x,y co-ordinates for P2: ");
	scanf("%f%f", &p2.x, &p2.y);
	
	float d = sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p1.y)*(p1.y-p1.y));
	
	printf("\nThe distance between the points (%f, %f) and (%f, %f) is %f .",p1.x, p1.y, p2.x, p2.y, d);
	return 0;
}
