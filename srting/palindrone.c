#include <stdio.h>

int main()
{
    char str[20];
    gets(str);
    int i = 0;
    int l = 0;

    while (str[i])
    {
        l++;
        i++;
    }
    printf("test i = %d len = %d\n", i, l);
    i=0;
    while (i < l/2)
    {
        if (str[i] != str[l-1-i])
        {
            printf("string is NOT palindrone");
            return 0;
        }
        i++;
    }    
    printf("Palindrone");
}