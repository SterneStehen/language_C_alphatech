#include <stdio.h>

#define s 7
#define n 4
int main()
{
    int i, j;
    int tmp[n];
    int arr[s] = {1,2,3,4,5,6,7};
    j=0;

    for(i=0; i<n; i++)
    {
        tmp[i] = arr[i];
        printf("tmp%d is %d\n", i, tmp[i]);
    }
    for(i=0; i<s-n; i++)
    {
        arr[i] = arr[i+n];    
    }
    while (i<s)
    {
        arr[i] = tmp[j];
        j++;
        i++;
    }

    for (i=0; i<s; i++)
        printf("array after is %d\n", arr[i]);
}