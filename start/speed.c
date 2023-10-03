#include <stdio.h>

int main()
{
    int hours, speed, distance, time;
    float minuts, remainderDistance;
    printf("Enter distance :");
    scanf("%d", &distance);
    printf("Enter speed :");
    scanf("%d", &speed);
    hours = distance/speed;
    remainderDistance = distance % speed;
    minuts = remainderDistance/speed*60;
    printf("Your Time is %d hours %.2f minuts", hours, minuts);

}
