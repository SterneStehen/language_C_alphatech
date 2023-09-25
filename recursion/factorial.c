#include <stdio.h>

int ft_fact(int n)
{
    if(n == 1)
        return 1;
    return n = n*ft_fact(n-1);
}

int main()
{
    int num;
    printf("Enter num:");
    scanf("%d", &num);
    printf("factorial number %d is %d", num, ft_fact(num));
}