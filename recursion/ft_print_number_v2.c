#include <stdio.h>
void ft_all(int num1)
{
    ft_print(num1);
    ft_print_res(num1);
}
void ft_print(int n1)
{
    if (n1 > 0)
    {
        printf("%d", n1);
        ft_print(n1-1);
    }
}
void ft_print_res(int n)
{
    if (n > 1)
    {
        ft_print_res(n-1);
        printf("%d", n);
    }
}

void ft_all_v2(int n)
{
    if (n==1)
        printf("%d", n);
    if (n > 1)
    {
        printf("%d", n);
        ft_all_v2(n-1);
        printf("%d", n);
    }
}
int main()
{
    int num = 7;
    ft_all_v2(num);
    return 0;
}