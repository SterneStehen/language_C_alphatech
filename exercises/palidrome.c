#include <stdio.h>

#define num 6

int main()
{
    int i;
    int flag = 1;
    int arr[num] = {1,3,5,5,3,1};

    for(i=0; i<num/2; i++)
    {
        if (arr[i] != arr[num-1-i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
        printf("array is NOT palidrome");
    else
        printf("array IS palidrome");


}
