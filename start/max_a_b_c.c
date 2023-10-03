#include <stdio.h>

int main()
{
    int a, b, c, min, max;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);
    printf("Enter c :");
    scanf("%d", &c);

    min = a;
    max = b;
    if(a > b)
    {
        min = b;
        max = a;
    }
    if(min > c)
        min = c;
    if(max < c)
        max = c;

    printf("minimum between 3 number = %d\n", min);
    printf("maximum between 3 number = %d\n", max);
}
