#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[10];
    float age;
    int id;
}emp;

int main()
{
    emp em1;
    emp em2 = {"sergii", 39.4 , 123};
    printf("age em2 is %.1f\n", em2.age);
    em1 = em2;
    printf("befor: \n");
    printf("name em1 is %s\n", em1.name);
    printf("age em1 is %.1f\n", em1.age);
    printf("id em1 is %.d\n", em1.id);
    strcpy(em1.name, "Oleg");
    em1.id = 456;
    printf("After: \n");
    printf("name em1 is %s\n", em1.name);
    printf("age em1 is %.1f\n", em1.age);
    printf("id em1 is %.d\n", em1.id);
}