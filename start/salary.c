#include <stdio.h>

int main()
{
    float solary, hours;
    printf("Enter Solary: ");
    scanf("%f", &solary);
    printf("Enter Hours: ");
    scanf("%f", &hours);
    printf("You solary in Month is = %.2f", solary*hours);
}
