#include <stdio.h>
int ft_lucas_v2(int n)
{
    if(n == 0)
        return 2;
    if(n == 1)
        return 1;
    return ft_lucas_v2(n-1) + ft_lucas_v2(n-2);
}

void ft_lucas(int a, int b)
{

    int c;
    int i;
    c = a + b;
    if ( a < 2)
    {
        printf("1 2 ");
    }
    if (c < 100)
    {
        printf("%d ", c);
        ft_lucas(b, c);
    }
}

int main()
{
    int a1, b1, num;
    a1 = 3;
    b1 = 4;
    num = 4;
    //ft_lucas(a1, b1);
    printf(" result is:  %d", ft_lucas_v2(num));
    return 0;
}