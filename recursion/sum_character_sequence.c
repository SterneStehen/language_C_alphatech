#include <stdio.h>

int ft_sequence(char symb)
{
    char character;
    printf("Enter character: ");
    scanf("%c", &character);
    if (character == '$')
    {
        return 0;
    }
    if (character == symb)
    {
        return 1 + ft_sequence(symb);
    }
    return ft_sequence(symb);
}

int main()
{
    char symbol = 'c';
    printf("to sequence symbol %c is %d", symbol, ft_sequence(symbol));
}