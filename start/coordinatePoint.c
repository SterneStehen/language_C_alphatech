#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter x:\n");
    scanf("%d", &x);
    printf("Enter y:\n");
    scanf("%d", &y);

    if (x < 0)
    {
        if( y < 0)
            printf("Point is in quadrant 3");
        else
            printf("Point is in quadrant 2");
    }
    else
    {
        if(y < 0)
            printf("Point is in quadrant 4");
        else
            printf("Point is in quadrant 1");
    }
}
