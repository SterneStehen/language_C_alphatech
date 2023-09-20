#include <stdio.h>

int main()
{
    int a = 5;
    int *p;
    p = &a;

    printf("print adresse a: %p\n", &a);
    printf("print adresse p: %p\n\n", p);
    
    printf("print vaule a: %d\n", a);
    printf("print vaule p: %d\n", *p);
}   