#include <stdio.h>

int main()
{
    int i, j, k, n, count, sumNotUni, flag, flag2;
    int arr1[10];
    int arr[10] = {5,7,3,4,5,6,8,9,10,3};
    flag = 1;
    sumNotUni = 0;
    k = 0;
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if (i == j)
                continue;
            if(arr[i] == arr[j])
                flag = 0;
        }
        if (flag == 0)
        {
            arr1[k] = arr[i];
            k++;
        }
        if(flag == 0)
        {}
        for(n=0; n<10; n++)
        {
            if (arr[i] == arr1[n])
                flag2 = 1;
        
            
        if (flag == 0)
            sumNotUni = sumNotUni + arr[i];
        flag = 1;
        }
    }
    printf("Sum Not unique digital is: %d", sumNotUni);

}