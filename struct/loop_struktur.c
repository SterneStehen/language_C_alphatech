#include <stdio.h>

typedef struct point
{
    int x;
    int y;
}point;


int main()
{
    int i;
    point myCoordinat[5];
    for(i=0; i<5; i++)
    {
        printf("Enter coordinar x point %d\n", i+1);
        scanf("%d", &myCoordinat[i].x);
        printf("Enter coordinar y point %d\n", i+1);
        scanf("%d", &myCoordinat[i].y);
    }
    for(i=0; i<5; i++)
    {
        printf("coordinat poin #%d is %d : %d\n", i+1, myCoordinat[i].x, myCoordinat[i].y);
    }
}

