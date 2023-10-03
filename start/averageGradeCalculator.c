#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade, i, sum;
    float average;

    sum = 0;
    i = 0;

    do
    {
        printf("Enter grade\n(if you can stop enter '-1')\n :");
        scanf("%d", &grade);
        sum = sum + grade;
        i++;
    }
    while(grade!=-1);

    average = sum/i;
    printf("result average grade is : %.2f\n i = %d, sum = %d", average, i, sum);
}
