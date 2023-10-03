#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;

    printf("Enter x:");
    scanf("%d", &x);

    printf("x^2 = %d\n", pow(x,2));
    y = pow(x,4);
    printf("x^4 = %d\n", y);
    y = pow(x,6);
    printf("x^6 = %d\n", y);
    y = pow(x,8);
    printf("x^8 = %d\n", y);
}
