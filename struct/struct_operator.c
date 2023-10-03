#include <stdio.h>

typedef struct employee
{
    char name[10];
    float age;
    int id;
}employee;


int ft_comparison(employee p1, employee p2)
{
    if (p1.age > p2.age && p1.id > p2.id)
        return 1;
    else if  (p1.age == p2.age && p1.id == p2.id)
    {
        return 0;
    }
    else
        return -1;
    
}

int main()
{
    employee em1 = {"peter", 22.4, 123};
    employee em2 = {"ivan", 24.3, 142};;
    if (ft_comparison(em1, em2) == 1)
        printf("employee 1 is grater");
    if (ft_comparison(em1, em2) == -1)
        printf("employee 2 is grater");
    if (ft_comparison(em1, em2) == 0)
        printf("employee 1 and 2 is equals");

}