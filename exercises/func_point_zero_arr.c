#include <stdio.h>

void ft_print(int *pArr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", pArr[i]);
    }
    
}

void ft_zero(int *pArr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        pArr[i] = 0;
    }
}

int main()
{
    int i;
    int arr[5] = {1,2,3,4,5};
    printf("array befor use function: ");
    ft_print(arr, 5);
    printf("\n");
    ft_zero(arr, 5);
    printf("array after use function: ");
    ft_print(arr, 5);
    return 0;
}