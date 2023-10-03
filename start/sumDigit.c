#include <stdio.h>

int main()
{
    int num, dig1, dig2, dig3;
    printf("Enter digital:");
    scanf("%d", &num);

    dig1 = num/100;
    dig3 = num%10;
    dig2 = (num/10)%10;
    printf("digital1 = %d\ndigital2 = %d\ndigital3 = %d\nsumDigital = %d", dig1, dig2, dig3, dig1+dig2+dig3);

}
