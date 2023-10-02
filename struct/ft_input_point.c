#include <stdio.h>

typedef struct point
{
    int x;
    int y;
}point;

void ft_print(point p1)
{
    printf("coordinft point is x = %d y = %d", p1.x, p1.y);
}

point ft_input()
{
    point p1;
    printf("Enter x: ");
    scanf("%d", &p1.x);
    printf("Enter y: ");
    scanf("%d", &p1.y);
    return p1;
}

int main()
{
    point point_way;
    point_way = ft_input();
    point_way.x = point_way.x+3;
    point_way.y = point_way.y-1;
    
    ft_print(point_way);
}
