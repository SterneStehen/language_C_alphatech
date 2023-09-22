#include <stdio.h>

int main()
{
    int arr[10] = {1,4,6,8,10,4,8,3,1,4};
    int i, j;
    int count = 0;

    for(i=0; i<10; i++)
    {
        for(j = 0; j<10; j++)
        {
            if (i == j)
                continue;
            if (arr[i] == arr[j] && j < i)
                count = count + arr[i];
        }
    }
printf("result is %d", count);
}