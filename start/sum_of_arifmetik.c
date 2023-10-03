#include <stdio.h>

int main()
{

    float n, a1, an, sn;

    printf("Enter a1:\n");
    scanf("%f", &a1);
    printf("Enter an:\n");
    scanf("%f", &an);
    printf("Enter n:\n");
    scanf("%f", &n);

    sn = (a1 + an) * (n / 2);
    printf("result = %.1f", sn);
}
