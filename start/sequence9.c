#include <stdio.h>

long funcSequence(int n)
{
    long  result = 0;
    int i, j;

    if(n<10)
    {
        for(j=1; j<=n; j++)
            result = result*10 + j;
        return result;
    }
    else
    {
        for(i=0; i<n; i++)
            result = result*10 + 9;
        return result;
    }

}


int main()
{
    int length;
    printf("Enter number :");
    scanf("%d", &length);
    length = 12
    printf("sequence is %ld", funcSequence(length));
}
