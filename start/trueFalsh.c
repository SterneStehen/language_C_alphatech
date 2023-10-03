#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 number a and b:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    if(a == b)
        printf("True");
    else
        printf("False");
}
