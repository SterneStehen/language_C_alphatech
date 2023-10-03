#include <stdio.h>

int sumDivisor(int num)
{
    int sum;
    int i;

    i = 1;
    sum = 0;
    while(i <= num/2)
    {
        if (num%i == 0)
            sum += i;
        i++;
        printf("sum %d is %d\n", i, sum);
    }
    return sum + num;
}
int sum2Divisor(int num)
{
    int sum;
    int i;

    i = 1;
    sum = 0;
    while(i*i <= num)
    {
        if (num%i == 0)
            sum += i;
        i++;
        printf("sum %d is %d\n", i, sum);
    }
    if (num % 2 == 0)
        return sum + num + num/2;
    else
        return sum + num + num/2+1;
}
int sum3Divisor(int num)
{
    int sum;
    int i;

    i = 1;
    sum = 0;
    while(i*i <= num)
    {
        if (num%i == 0)
            sum += i + num/i;
        i++;
        printf("sum %d is %d\n", i, sum);
    }
    if (i*i == num)
        return sum + i;
    else
        return sum;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("sum(firs) of divisors is %d", sumDivisor(n));
    printf("sum(second) of divisors is %d", sum2Divisor(n));
    printf("sum(second) of divisors is %d", sum3Divisor(n));
}
