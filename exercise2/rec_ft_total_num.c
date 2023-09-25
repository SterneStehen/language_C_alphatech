#include <stdio.h>

int ft_scanf(int num)
{
    if (num < 0)
    {
        return 0;
    }
    return 1 + ft_scanf(scanf("%d", &num));
}

int main()
{
    int n = 3;
    printf("%d", ft_scanf(n));
}