#include <stdio.h>
#include <stdlib.h>

int arrey_number()
{
    funk_pow();
    int i;
    int arr[10];
    int tmp = 0;

    for (i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]>tmp)
            tmp = i;
    }
    printf("%d", tmp);


    return 0;
}
