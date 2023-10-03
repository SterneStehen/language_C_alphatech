#include <stdio.h>

int main()
{
    int i, num;
    printf("Enter number: ");
    scanf("%d", &num);

    //for(i=1; i<=100; i++)
    //printf("%d * %d = %d\n", num, i, num*i);

    for(i=2; i<=(num*2); i=i+2)
        printf("%d ", i);

}
