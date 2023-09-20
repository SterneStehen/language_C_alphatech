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
            if(arr[i] == arr[j])
            {
                count = count + 1;
            }
            if (count == 2)
                continue;
        }
        if (count == 1)
            printf("unique digit is %d, number element is %d\n", arr[i], i);
        count = 0;
    }


}