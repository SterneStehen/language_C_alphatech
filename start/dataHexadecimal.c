#include <stdio.h>

int main()
{
    int year, month, day;
    printf("Enter Year Month and Day : ");
    scanf("%d%d%d", &year, &month, &day);

    printf("Year in Hexadecimal is 0x%x\n Monht in Hexadecimal is 0x%X\n Day in Hexadecimal is 0x%X\n", year, month, day);
}
