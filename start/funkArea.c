#include <stdio.h>

int funcArea(int x, int y)
{
    return (x * y);
}

int main()
{
    int a, b;
    a = 3;
    b = 4;
    printf("Area is %d", funcArea(a, b));

}
