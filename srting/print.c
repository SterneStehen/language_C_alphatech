#include <stdio.h>

int main()
{
    int i = 0;
    char name[] = "Sergii Morarenko";
    while (name[i])
    {
        printf("%c", name[i]);
        i++;
    }  
    printf("\n\n One string:\n");
    printf("%s", name);  
}