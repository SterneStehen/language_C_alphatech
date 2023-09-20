#include <stdio.h>
#include <stdlib.h>

#define num 7

int main()
{
    int arr1[2][3] = {{5,6},{7}};
    int i, j;

    for (i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
            printf(" %d ", arr1[i][j]);
      printf("\n");
    }
    printf("next array \n \n \n");

    int arr2[4][3] = {{1,2},{4,5,8},{10}};

    for (i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
            printf(" %d ", arr2[i][j]);
      printf("\n");
    }
    printf("next array \n \n \n");

    int arr3[2][3] = {5,2,1,6,5};

    for (i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
            printf(" %d ", arr3[i][j]);
      printf("\n");
    }
    return 0;
}
