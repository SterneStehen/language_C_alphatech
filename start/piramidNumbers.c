#include <stdio.h>

int main()
{
    int i, j, t, p, num;
    j = 1;
    i = 1;
    t = 1;

    printf("Enter number: ");
    scanf("%d", &num);
    p = num-1;

    /*for(i=1; i<=num; i++)
    {
        for(j; j<=i; j++)
            printf("%d ", j);
        printf("\n");
    }
    */
    while(i<=num)
    {
        while(p>0)
        {
            printf(" ");
            p--;
        }
        while(t<=i)
        {
            printf("%d ", j);
            j++;
            t++;
        }
        i++;
        printf("\n");
        t = 1;
        p = num-i;
    }
}
