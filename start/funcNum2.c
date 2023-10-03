#include <stdio.h>

float funcAverage(int number, int dig)
{
    int count, tmp, sum;
    float average;
    count = 0;
    sum = 0;

    while(number>0)
    {
        tmp = number%10;
        if(tmp < dig)
        {
            sum = sum + tmp;
            count++;
        }
        number = number/10;

    }
    average = sum/(float)count;
    printf("Amount digit less %d is %d, average is %f\n", dig, count, average);
    return(average);

}
int main()
{
    int num, digit;
    float result;

    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter digit : ");
    scanf("%d", &digit);
    result = funcAverage(num, digit);
    printf("average digit is %f", result);

}
