#include <stdio.h>

int main()
{
    int a, b;
    int tmp;
    a = 1;
    b = 9;
    printf("befor a = %d, b = %d\n", a, b);
    tmp = a;
    a = b;
    b = tmp;
    printf("after a = %d, b = %d", a, b);

}
