#include <stdio.h>

int max_value(int n)
{
    int digit;
    int tmp = 0;
    int i = 0;
    printf("Enter digit: ");
    scanf("%d", &digit);

    if (n == 0)
        return tmp;
    if (n > 1)
    {
        tmp = max_value(n-1);
        printf("test digit = %d, n = %d\n", digit, n);
    }
    if (tmp < digit)
    {
        tmp = digit;
        printf("test tmp = %d\n", tmp);
    }
    return tmp;
}

int main()
{
    int num  = 4;
    printf("maximum value is %d", max_value(num));
}