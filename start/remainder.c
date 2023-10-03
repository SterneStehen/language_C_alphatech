#include <stdio.h>

int main()
{
    float data, remaind;
    printf("Enter number:");
    scanf("%f", &data);
    remaind = data - (int)data;
    printf("Your remainder: %.2f", remaind);
}
