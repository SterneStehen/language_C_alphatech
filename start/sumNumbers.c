#include <stdio.h>

int main()
{
    int i, num, res;

    res = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    for(i=1; i<=(num-1); i++)
    {
        res = i+res;
        printf("%d+", i);
    }
    printf("%d=", i);
    res = i+res;
    printf("%d", res);

}
