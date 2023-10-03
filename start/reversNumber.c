#include <stdio.h>

int main()
{
    int num, units, tens, hundreds, reverseNum;
    printf("Enter numbers: ");
    scanf("%d", &num);
    units = num % 10;
    tens = num / 10 % 10;
    hundreds = num / 100;
    reverseNum = (units * 10 + tens) * 10 + hundreds;
    printf("Reverse number is: %d%d%d\n", units, tens, hundreds);
    printf("Reverse number 2: %d%d%d\n", num%10, num / 10 % 10, num / 100);
    printf("Reverse number 3: %d", reverseNum);
}
