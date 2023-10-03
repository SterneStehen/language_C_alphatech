#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2;
    float distance, tmp;
    x1 = 1;
    x2 = 4;
    y1 = 3;
    y2 = 7;
    tmp = (x1 - x2)*(x1-x2) + (y1-y2)*(y1- y2);
    distance = sqrt(tmp);
    printf("Distance is %.2f", distance);
}
