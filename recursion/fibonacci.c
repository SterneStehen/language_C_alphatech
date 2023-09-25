#include <stdio.h>

int ft_fibon(int num)
{
    if(num==1)
        return 1;
    if(num== 0)
        return 0; 
    return ft_fibon(num-1) + ft_fibon(num-2);
}

int main()
{
    int n;
    printf ("Enter number:");
    scanf("%d", &n);
    printf("number %d hav digit Fibonacci %d", n, ft_fibon(n));
}