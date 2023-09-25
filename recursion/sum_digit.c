#include <stdio.h>

int ft_sum_of_digit(int num)
{
    int x;
    if(num == 0)
        return 0;
    return num%10 + ft_sum_of_digit(num/10);
    
    // x = num%10;
    // num = num/10;
    // x = x + ft_sum_of_digit(num);
    // return x;
}


int main()
{
    int n = 999105;
    printf("result summ digit number %d is %d", n, ft_sum_of_digit(n));
}