#include <stdio.h>

int main()
{
    char grade;
    printf ("Enter grade ");
    scanf("%c", &grade);
    switch(grade)
    {
        case 'A':
            printf("You grade is 90-100");
            break;
        case 'B':
            printf("You grade is 80-90");
            break;
        case 'C':
            printf("You grade is 70-80");
            break;
        case 'D':
            printf("You grade is 60-70");
            break;
        default:
            printf("ERROR... try again");
            break;
    }
}
