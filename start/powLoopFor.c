#include <stdio.h>

int main()
{
    int pow, num, i, res;
    res = 1;

    printf("Enter number and power :");
    scanf("%d%d", &num, &pow);

    for(i=0; i<pow; i++)
    {
        res = res*num;
    }
    printf("Number %d to power %d is %d", num, pow, res);
}
