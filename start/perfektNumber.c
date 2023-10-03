#include <stdio.h>

int funkPerfect(int num)
{
    int i;
    int sum;
    i = 1;
    sum = 0;

    while(i*i < num)
    {
        if (num%i == 0)
            sum = sum + i + num/i;
        printf("i = %d, sum = %d\n", i, sum);
        i++;
    }
    if (i*i == num)
        sum = sum + i;
    printf("i = %d, sum = %d\n", i, sum);
    if (sum/2 == num)
        return 1;
    else
        return -1;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("result is %d", funkPerfect(n));
}
