#include <stdio.h>

int main()
{
    int number;
    printf("Enter number :");
    scanf("%d", &number);

    if (number < 0)
        number = number * -1;
    printf("Absolute value integer is %d", number);
}
