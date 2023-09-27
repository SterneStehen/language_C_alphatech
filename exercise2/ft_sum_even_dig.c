#include <stdio.h>

int ft_sum_even()
{
    int digit;
    printf ("Enter digit: ");
    scanf("%d", &digit);
    if (digit == -1)
    {
        return 0;
    }
    if (digit%2 == 0)
        return digit + ft_sum_even();
    return ft_sum_even();   
}

int main()
{
    printf("sum even digit to sequence is %d", ft_sum_even());
}