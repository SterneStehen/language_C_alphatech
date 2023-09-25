#include <stdio.h>
#include <stdlib.h>

int ft_number_worlds(char *pStr)
{
    int i, count;

    i = 0;
    count = 1;
    while (pStr[i])
    {
        if (pStr[0] == ' ')
            i++;
		if (pStr[i] == ' ' && (('A' <= pStr[i + 1] && pStr[i + 1] <= 'Z') || ('a' <= pStr[i + 1] && (pStr[i + 1]) <= 'z')))
            count ++;		
        i++;
    }
    return count;
}

int main()
{
    char str[20];
    gets(str);
    printf("To string %s is %d world", str, ft_number_worlds(str));
}