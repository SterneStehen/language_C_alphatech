#include <stdio.h>

int main()
{
    int num, i, sum;

    i = 3;
    sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while(i<=num)
    {
        sum = sum + i;
        printf("i = %d\n", i);
        i= i + 3;
    }
    i = 5;
     while(i<=num)
    {
        if(i%3 != 0)
        {
           sum = sum + i;
        printf("i = %d\n", i);
        }
        i = i + 5;
    }
    printf("Sum number is: %d" , sum);
}
