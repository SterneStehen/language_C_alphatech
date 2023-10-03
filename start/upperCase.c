#include <stdio.h>

int main()
{
    char scan;
    printf("Enter characters");
    scanf("%c", &scan);

    if(scan > 65 && scan < 90)
        printf("result is %c", scan + 32);
}
