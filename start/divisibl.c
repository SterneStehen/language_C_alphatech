#include <stdio.h>

int main()
{
    int a, b, c;


    if(a == 0 || b == 0 || c == 0)
        return 0;
    printf("Enter a, b, c:\n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a % c == 0 && b % c == 0) || (c % b == 0 && a % b == 0) || (b % a == 0 && c % a == 0))
        printf("DIVISIBLE");
    else
        printf("NOT DIVISIBLE");
}
