#include <stdio.h>

int main()
{
    int arr[10] = {5,7,3,4,5,6,8,9,10,3};
    int arr2[10];
    int i, j, n;
    int count = 0;
    int flag = 0;
    n = 0;

    for(i=0; i<10; i++)
    {
        for(j = 0; j<10; j++)
        {
            if (i == j)
                continue;
            if (arr[i] == arr[j])
            {              
                arr2[n] = arr[i];
                n++;
            }
        }
    }
    n = n+1;
        while (n < 10)
        {
            arr2[n] = 0;
        }
        
        {
            arr2[n] = 0;
        }
    for(i=0; i<10; i++)
    {
        printf("test arr2 %d\n", arr2[i]);
    }
    n = 0;
    for(i = 0; i<10; i++)
    {
        for (j = 0; j<10; j++)
        {
            if (i == j)
                continue;
            if (arr2[i] == arr2[j])
                arr2[i] = 0;
        }
    }
    printf("\n");
    for(i=0; i<10; i++)
    {
        printf("test arr2 %d\n", arr2[i]);
    }
    for(i = 0; i<10; i++)
    {
        count =  count + arr2[i];
    }
    printf("Result is %d", count);

}