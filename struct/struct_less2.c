#include <stdio.h>

struct data
{
    int day;
    int month;
    int year;
};

int main()
{
    struct data my_birthday;    
    printf("Enter day ");
    scanf("%d", &my_birthday.day);
    printf("Enter month ");
    scanf("%d", &my_birthday.month);
    printf("Enter year ");
    scanf("%d", &my_birthday.year);

    struct data my_First_day;    
    printf("Enter day ");
    scanf("%d", &my_First_day.day);
    printf("Enter month ");
    scanf("%d", &my_First_day.month);
    printf("Enter year ");
    scanf("%d", &my_First_day.year);
    
    printf("My birthDay is %d:%d:%d", my_birthday.day, my_birthday.month, my_birthday.year);
    printf("Start to My scool is  %d:%d:%d", my_First_day.day, my_First_day.month, my_First_day.year);
    
}
