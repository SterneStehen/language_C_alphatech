#include <stdio.h>

int main()
{

    int a, b, c;
    float resul;
    printf("input a:");
    scanf("%d", &a);
    printf("input b:");
    scanf("%d", &b);
    printf("input c:");
    scanf("%d", &c);
    resul = (a+b+(float)c)/3;
    printf("%.2f", resul);
}

