#include <stdio.h>


void funcMinMax(int n1, int n2, int *max, int *min)
{
    if (n1 > n2)
    {
        *min = n2;
        *max = n1;
    }
    else
    {
        *max = n2;
        *min = n1;
    }
}

int main()
{
    int num1, num2;
    int maxi, mini;

    num1 = 33;
    num2 = 20;
    funcMinMax(num1, num2, &maxi, &mini);
    printf("maximal digital is %d\n", maxi);
    printf("minimal digital is %d\n", mini);
}