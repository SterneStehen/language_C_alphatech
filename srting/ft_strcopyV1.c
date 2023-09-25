#include <stdio.h>

void ft_strcopy(char *dst, char *str)
{
    int i = 0;
    int j = 0;
    while (dst[j] != '\0')
    {
        j++;
    }
    printf("test len dst = %d\n", j);
    while (str[i] != '\0')
    {
        dst[j] = str[i];
        i++;
        j++;
    }
    dst[j] = '\0';
    printf("test len dst = %d\n", j);
}

int main()
{
    
    char destination[20];
    printf("Enter destination:\n");
    gets(destination);
    char source[10];
    printf ("Enter source:\n");
    gets(source);
    ft_strcopy(destination, source);

    printf("result use funtion Copy is: %s", destination);
}