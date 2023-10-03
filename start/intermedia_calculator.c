#include <stdio.h>

int main()
{
    char character;
    int a, b;
    printf("Enter character '+' or '-' or '/' or '*' or '%' \n");
    scanf("%c", &character);
    printf("Enter 1 digit  ");
    scanf("%d", &a);
    printf("Enter 2 digit  ");
    scanf("%d", &b);
    switch(character)
    {
        case '+':
            printf("result %d + %d = %d", a, b, a + b);
            break;
        case '-':
            printf("result %d - %d = %d", a, b, a - b);
            break;
        case '*':
            printf("result %d * %d = %d", a, b, a * b);
            break;
        case '/':
            printf("result %d / %d = %d", a, b, a / b);
            break;
        case '%':
            printf("result %d % %d = %d", a, b, a % b);
            break;
        default:
            printf("ERROR... try again");
            break;
    }
}
