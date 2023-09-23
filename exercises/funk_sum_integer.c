#include <stdio.h>

int ft_sum (int *pArr, int size)
{
    int i;
    int counter = 0;

    for(i=0; i<size; i++)
    {
        counter = counter + pArr[i];
        printf("test1 arr take is %d\n", pArr[i]);
    }
    return counter;
}

int main()
{
    int i;
    int sum;
    int arr[3] = {1,3,10};
    sum = ft_sum(arr, 3);
    printf("sum is = %d", sum);
}