#include <stdio.h>

int ft_lucas(int num)
{
    int i = 3;
    int c;
    int a = 1;
    int b = 3;

    if(num == 1)
        return 1;
    if (num == 0)
    {
        return 2;
    }
    while (i <= num)
    {
        c = a + b;
        a = b;
        b = c;
        i++;        
    }
    return c;
}

int main()
{
    int num = 8;
    printf("%d", ft_lucas(num));
}