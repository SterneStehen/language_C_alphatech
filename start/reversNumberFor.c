#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter number: ");
    scanf("%d",  &num);

    for (i=1; i<=num; i++)
        printf(" %d ", i);
    printf("\n");
    for (i=num; i>=1; i--)
        printf(" %d ", i);
}
