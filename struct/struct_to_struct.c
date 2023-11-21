#include <stdio.h>

typedef struct point
{
	int x;
	int y;
}point;

typedef struct cirle
{
	point central;
	double radius;
}circle;
int main()
{
	point p1 = {5, 7};
	circle  c1;
	c1.radius  = 22;
	c1.central = p1;
	c1.central.x = 4;
}
