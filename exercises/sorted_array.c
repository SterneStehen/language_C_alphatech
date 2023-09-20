#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,2,6};
    int i;
    int flag = 1;

    for (i = 1; i < 5; i++)
    {
        if (arr[i] == arr[i-1])
        {
            flag = 0;
        }
        else if (arr[i] < arr[i-1] )
        {
            flag = -1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("array IS sorted");
    }
    else if (flag == -1)
    {
        printf("array is NOT sorted"); 
    }
    else
        printf("Array IS REALLY sorted"); 
    
}