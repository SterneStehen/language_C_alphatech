#include <stdio.h>

int funcFactorial(num)
{
    if (num<0)
        return - 1;

    int i, resul;

    resul = 1;
    i = 1;
    while(i <= num)
    {
        resul = resul * i;
        i++;
    }
    return resul;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("factorial digit %d is %d", n, funcFactorial(n));

}
