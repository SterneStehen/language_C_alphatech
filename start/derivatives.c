#include <stdio.h>
#include <math.h>

float derivatives(float c, float x, float n)
{
    float powD;
    powD = pow(x, n-1);
    return n * c * powD;
}

int main()
{
    float c, x, n;
    c = 4;
    x = 5;
    n = 6;

    printf("result is = %f", derivatives(c, x, n));
}
