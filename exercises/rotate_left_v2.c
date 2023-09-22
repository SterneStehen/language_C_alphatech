#include <stdio.h>

#define n  3
#define size 7

int main()
{
    int i, j, k, tmp;
    int arr[size] = {1,2,3,4,5,6,7};

    for(k=0; k<n; k++)
    {
        tmp = arr[0];
        for(i=0; i<size; i++)
        {
            arr[i] = arr[i+1];
        }
        arr[size-1] = tmp;
    }
    for (i=0; i<size; i++)
    {
        printf("%d", arr[i]);
    }
}