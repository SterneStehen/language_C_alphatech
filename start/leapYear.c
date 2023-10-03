#include <stdio.h>

int main()
{
    int year;

    printf("Enter Year:");
    scanf("%d", &year);

    if((year - 2000)%4==0)
        printf("Year is leap");
    else
        printf("Year is NOT leap");
}
