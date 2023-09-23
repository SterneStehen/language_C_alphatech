#include <stdio.h>
#include <math.h>

#define size 4
int main()
{
    int i, j, tmp, minSum, index1, index2;

    int arr[size] = {-1,2,3,-6};
    minSum = arr[0] + arr[1];
    index1 = 1;
    index2 = 0;

    for(i=0; i<size; i++)
    {
        printf("i = %d\n", i);
        for(j=i+1; j<size; j++)
        {
            
            tmp = arr[j]+ arr[i];
            if (tmp < 0)
                tmp = -1 * tmp;
            if (tmp < minSum)
            {
                minSum = tmp;
                index1 = j;
                index2 = i;
                printf("test near_elemet: j = %d, i = %d, tmp = %d, near = %d\n", i, j, tmp, minSum);
            }
        }
    }
    printf("sum element %d plus element %d is the most to zero = %d", index1, index2, minSum);
}