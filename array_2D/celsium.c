#include <stdio.h>
#include <stdlib.h>

#define num 7

int main()
{
    int i;
    int tmp;
    int arr[num];

    for (i=0; i<7; i++)
    {
        printf("Enter temperature today :");
        scanf("%d", &arr[i]);
    }
}
