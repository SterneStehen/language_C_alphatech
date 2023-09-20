#include <stdio.h>

int main()
{
    int grade1 = 5;
    int grade2 = 7;

    int *p1;
    int *p2;

    p1 = &grade1;
    p2 = &grade2;

    printf("value grade1 and grade2 is %d %d\n", grade1, grade2);
    printf("adresse grade1 and grade2 is %p %p\n", &grade1, &grade2);
    printf("value grade1 and grade2 wiht pointer is %d %d\n", *p1, *p2);
    printf("adresse grade1 and grade2 wiht pointer is %p %p\n", p1, p2);
}