#include <stdio.h>

int main()
{
    int second, minutes, hours;
    float remainderSecond;
    printf("Enter second:");
    scanf("%d", &second);
    hours = second / 3600;
    remainderSecond = second % 3600;
    minutes = remainderSecond / 60;
    remainderSecond = second % 60;
    printf("Your result is %d hours, %d minutes, %.0f second", hours, minutes, remainderSecond);

}
