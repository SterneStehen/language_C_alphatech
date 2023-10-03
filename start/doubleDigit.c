#include <stdio.h>

int main()
{
    int num;
    printf("Enter digit:");
    scanf("%d", &num);

    if (num < 100 && num > 9)
        printf("This is Double-digit");
    else if (num < 1000 && num > 99)
        printf("This is Triple-digit");
    else
        printf("This is neither double/triple digit");
}
