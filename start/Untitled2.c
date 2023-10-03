
#include <stdio.h>

int main()
{

    int max = 0;
    int i;
    int arr[10] = {0, 6, 3, 8, 5, 9, 5, 0, 9,  9};


    for(i = 0; i < 10; i++)
    {
        if (arr[i]>max)
            max =  arr[i];
    }
    printf("max value element array is %d", max);

    return 0;
}
