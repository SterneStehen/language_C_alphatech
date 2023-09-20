#include <stdio.h>
#include <stdlib.h>

#define num 7

int main()
{
    int i;
    int tmp = 0;
    int hottest = 0;
    int coldest = 0;
    int arr[num];

    for (i=0; i<num; i++)
    {
        printf("Enter temperature today :");
        scanf("%d", &arr[i]);
        tmp = tmp + arr[i];
        if (arr[hottest]<arr[i])
            hottest = i;
        if (arr[coldest]>arr[i])
            coldest = i;
    }
    printf(" hottest day of the Week is %d \n coldest Day of the Week is %d \n Average Temperature is %.2f", hottest+1, coldest+1, (float)tmp/7);
}
