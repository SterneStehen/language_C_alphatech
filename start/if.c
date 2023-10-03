#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter number a");
    scanf("%f", &a);
    printf("Enter number b");
    scanf("%f", &b);
    if (a > b)
        printf("%f is maximum\n %f is minimum" a, b);
    else
        printf("%f is maximum\n %f is minimum" b, a);
    return 0;
}
