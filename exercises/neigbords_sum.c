#include <stdio.h>

int main()
{
    int arr1[5] = {1,4,3,7,2};
    int arr2[5] = {5,7,1,5,2};
    int i;
    int resul = 0;

    for (i=1; i<5; i++)
    {
        if(resul < arr1[i] + arr1[i-1])
            resul = arr1[i] + arr1[i-1];
    }
    
    printf("Max sum of neigbords to array1 is %d\n", resul);
    resul = 0;
    for (i=1; i<5; i++)
    {
        if(resul < arr2[i] + arr2[i-1])
            resul = arr2[i] + arr2[i-1];
    }
    printf("Max sum of neigbords to array2 is %d", resul);
        


}