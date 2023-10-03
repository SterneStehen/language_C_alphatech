#include <stdio.h>

int charToDigit(char a, char b, char c)
{
    int result;
    int ai;
    int bi;
    int ci;
    ai = a - '0';
    bi = b - '0';
    ci = c - '0';
    result = (ai*100) + (bi*10) + ci;
    printf("ai = %d, bi = %d, ci = %d ", ai, bi, ci);


    if((a < '0' && a > '9') || (b < '0' && b > '9') || (c < '0' && c > '9'))
       return -1;
    else
    {
        result = b - '0';

    }
}

int main()
{
    char num1;
    char num2;
    char num3;
    printf("Enter 1 char: ");
    scanf("%c", &num1);
    printf("Enter 2 char: ");
    scanf("%c", &num2);
    printf("Enter 3 char: ");
    scanf("%c", &num3);
    printf("result is %d", charToDigit(num1, num2, num3));
}
