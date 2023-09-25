#include <stdio.h>

int ft_sum_of_digit(int dig)
{
    if(dig > 0)
    {
        dig = dig + ft_sum_of_digit(dig-1);
        printf("test digit = %d\n",dig);
    }
    return dig;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("sum  digit to %d is = %d", n, ft_sum_of_digit(n));
}
    //return result;
    
    // int result = 0;
    // int i = 1;
    // while (i <= dig)
    // {
    //     result = result + i;
    //     i++;
    // }
    // return result;
