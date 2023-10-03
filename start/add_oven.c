#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    if (n%2==0)
        printf("It is EVEN number");
    else
        printf("It is ODD number");
    return 0;
}
