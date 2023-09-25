#include <stdio.h>

int ft_sum_dig(int num)
{
    
    if (num == 0)
        return 0;
    return 1 + ft_sum_dig(num/10);
}

int main()
{
    int n = 5544445;
    printf("count digit %d is %d", n, ft_sum_dig(n));
}