#include <stdio.h>

int main()
{
    int arr1[3] = {1,2,2000};
    int arr2[3];
    int i;
    for(i=0; i<3; i++)
    {
        arr2[i] = arr1[i];
    }
    for (i=0; i<3; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (i=0; i<3; i++)
    {
        printf("%d ", arr2[i]);
    }
}   