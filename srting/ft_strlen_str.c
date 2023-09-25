#include <stdio.h>

int ft_len(char *line)
{
    int i = 0;
    while (line[i])
    {
        i++;
    }
    return i;
    
}

int main()
{
    int len;
    char str[12];
    gets(str);
    len = ft_len(str);
    printf("lenght string = %d", len);
}