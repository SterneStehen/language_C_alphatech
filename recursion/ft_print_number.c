#include <stdio.h>

int ft_print_number(int num)
{
    
    if (num == 0)
        return 1;  
    return  printf("%d", num - 1 + ft_print_number(num-1)); 

}
void ft_print_number_v2(int num)
{
    if (num > 0)
    {
        ft_print_number_v2(num-1);
        printf("%d", num);   
    }
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    //ft_print_number(n);
    ft_print_number_v2(n);
}