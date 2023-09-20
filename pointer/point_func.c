#include <stdio.h>



int funcFindMax(int num1, int num2)
{
    if (num1>num2)
        return num1;
    else
        return num2;
}
int funcFindMin(int num1, int num2)
{
    if (num1>num2)
        return num2;
    else
        return num1;
}

void funcFindAll(int a1, int b1, int *pmax, int *pmin)
{
    
    if (a1>b1)
    {
        *pmax = a1;
        *pmin = b1;    
    }
    else
        *pmax = b1;
        *pmin = a1;
        
}

int main()
{
    int a = 2;
    int b = 1;
    int max, min;
    // max = funcFindMax(a,b);
    // min = funcFindMin(a,b);
    
    // printf("maximum is %d\n", max);
    // printf("minimum is %d\n", min);

    funcFindAll(a, b, &max, &min);
    
    printf("maximium is %d\n", max);
    printf("minimum is %d", min);

}