#include <stdio.h>

int ft_scanf(int num)
{
    int input_call;

    printf("Enter digit: ");
    scanf("%d", &input_call);
    if (input_call < 0)
        return 0;
    if (input_call < num)
    {
        return 1 + ft_scanf(num);   
    }
    return ft_scanf(num);     
}

int main()
{
    int n = 5;
    printf("%d", ft_scanf(n));
}