#include <stdio.h>

int main()
{
    int num, tmp, evensum, oddsum, i;
    i = 0;
    evensum = 0;
    oddsum = 0;

    printf("Enter sum:");
    scanf("%d", &num);

    while(num>0)
    {
        tmp = num % 10;
        num = num / 10;
        i++;
        if (i%2==0)
            evensum = evensum + tmp;
        else
            oddsum = oddsum + tmp;
        printf("num = %d, evensum = %d, oddsum = %d\n", num, evensum, oddsum);

    }
}
