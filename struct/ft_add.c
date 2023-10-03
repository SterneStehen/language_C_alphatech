#include <stdio.h>

typedef struct point
{
    int x;
    int y;
}point;

void ft_add(point* add)
{
    (*add).x = (*add).x + 1;
    (*add).y = (*add).y + 1;
}

point ft_increment(point num1, point num2)
{
    point result;
    result.x = num1.x + num2.x;
    result.y = num1.y + num2.y;
    return result;
}

int main()
{
    point p1 = {1,3};
    point p2 = {6,7};
    point p3;
    printf("Befor: \n");
    printf(" p1 is x = %d, y = %d\n", p1.x, p1.y);
    printf(" p2 is x = %d, y = %d\n", p2.x, p2.y);
    ft_add(&p1);
    printf("After: \n");
    printf(" p1 is x = %d, y = %d\n", p1.x, p1.y);
    printf(" p2 is x = %d, y = %d\n", p2.x, p2.y);
    p3 = ft_increment(p1, p2);
    printf("After p3: \n");
    printf(" p3 is x = %d, y = %d\n", p3.x, p3.y);

}
