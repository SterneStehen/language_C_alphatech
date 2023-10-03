#include <stdio.h>

int main()
{
    int num, pow, res;

    printf("Enter number and power :");
    scanf("%d%d", &num, &pow);
    res = 1;
    //pow = pow - 1;

    while(pow > 0)
    {
        res = res*num;
        pow = pow - 1;
    }
    printf("Result number in power is %d", res);
}
