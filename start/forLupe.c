#include <stdio.h>
int main()
{
    int i, res, n, f;
    printf("Enter number :");
    scanf("%d", &n);
    res = 1;
    f = 10;
    for(i=2; i<=(n+1); i++)
    {
        printf("%d\n", res);
        res = i*f + i;
        f = f*10;
    }
}

/*
int main()
{
    int i, j, n, res;
    n = 5
    printf("Enter number :");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            printf("%d", j);
    printf("\n");
    }
}
*/
/*
int main()
{
    int i, n, j;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=0; j < i; j++)
            printf("%d", i);
        printf("\n");
    }
}
*/
